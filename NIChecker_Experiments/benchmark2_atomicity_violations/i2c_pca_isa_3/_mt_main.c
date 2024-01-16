typedef int pthread_t;
/*
 *  i2c-pca-isa.c driver for PCA9564 on ISA boards
 *    Copyright (C) 2004 Arcom Control Systems
 *    Copyright (C) 2008 Pengutronix
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
//#include <stdio.h>
//#include <pthread.h>
//#include <assert.h>

#if FULLCODE

//#include <linux/kernel.h>
//#include <linux/ioport.h>
//#include <linux/module.h>
//#include <linux/moduleparam.h>
//#include <linux/delay.h>
//#include <linux/jiffies.h>
//#include <linux/init.h>
//#include <linux/interrupt.h>
//#include <linux/wait.h>
//#include <linux/isa.h>
//#include <linux/i2c.h>
//#include <linux/i2c-algo-pca.h>

//#include <asm/io.h>
//#include <asm/irq.h>

#define DRIVER "i2c-pca-isa"
#define IO_SIZE 4

//#define MAX_LENGTH 10000
//#define TRIGGER 9000


static unsigned long base;
static int irq = -1;

/* Data sheet recommends 59kHz for 100kHz operation due to variation
 * in the actual clock rate */
static int clock  = 59000;

static struct i2c_adapter pca_isa_ops;
static wait_queue_head_t pca_wait;
void pca_isa_probe(int, int);
void pca_isa_init(int, int);
void pca_isa_exit(void);

static void pca_isa_writebyte(void *pd, int reg, int val)
{
#ifdef DEBUG_IO
	static char *names[] = { "T/O", "DAT", "ADR", "CON" };
	printk(KERN_DEBUG "*** write %s at %#lx <= %#04xn", names[reg],
	       base+reg, val);
#endif
	outb(val, base+reg);
}

static int pca_isa_readbyte(void *pd, int reg)
{
	int res = inb(base+reg);
#ifdef DEBUG_IO
	{
		static char *names[] = { "STA", "DAT", "ADR", "CON" };
		printk(KERN_DEBUG "*** read  %s => %#04xn", names[reg], res);
	}
#endif
	return res;
}

static int pca_isa_waitforcompletion(void *pd)
{
	unsigned long timeout;
	long ret;

	if (irq > -1) {
		ret = wait_event_timeout(pca_wait,
				pca_isa_readbyte(pd, I2C_PCA_CON)
				& I2C_PCA_CON_SI, pca_isa_ops.timeout);
	} else {
		/* Do polling */
		timeout = jiffies + pca_isa_ops.timeout;
		do {
			ret = time_before(jiffies, timeout);
			if (pca_isa_readbyte(pd, I2C_PCA_CON)
					& I2C_PCA_CON_SI)
				break;
			udelay(100);
		} while (ret);
	}

	return ret > 0;
}

static void pca_isa_resetchip(void *pd)
{
	/* apparently only an external reset will do it. not a lot can be done */
	printk(KERN_WARNING DRIVER ": Haven't figured out how to do a reset yetn");
}

static irqreturn_t pca_handler(int this_irq, void *dev_id) {
	wake_up(&pca_wait);
	return IRQ_HANDLED;
}

static struct i2c_algo_pca_data pca_isa_data = {
	/* .data intentionally left NULL, not needed with ISA */
	.write_byte		= pca_isa_writebyte,
	.read_byte		= pca_isa_readbyte,
	.wait_for_completion	= pca_isa_waitforcompletion,
	.reset_chip		= pca_isa_resetchip,
};

static struct i2c_adapter pca_isa_ops = {
	.owner          = THIS_MODULE,
	.algo_data	= &pca_isa_data,
	.name		= "PCA9564/PCA9665 ISA Adapter",
	.timeout	= HZ,
};

static int __devinit pca_isa_match(struct device *dev, unsigned int id)
{
	int match = base != 0;

	if (match) {
		if (irq <= -1)
			dev_warn(dev, "Using polling mode (specify irq)n");
	} else
		dev_err(dev, "Please specify I/O basen");

	return match;
}
#endif

#if FULLCODE
static int __devinit pca_isa_probe(struct device *dev, unsigned int id)
{
	init_waitqueue_head(&pca_wait);

	dev_info(dev, "i/o base %#08lx. irq %dn", base, irq);

#ifdef CONFIG_PPC
	if (check_legacy_ioport(base)) {
		dev_err(dev, "I/O address %#08lx is not availablen", base);
		goto out;
	}
#endif

	if (!request_region(base, IO_SIZE, "i2c-pca-isa")) {
		dev_err(dev, "I/O address %#08lx is in usen", base);
		goto out;
	}

	if (irq > -1) {
		if (request_irq(irq, pca_handler, 0, "i2c-pca-isa", &pca_isa_ops) < 0) {
			dev_err(dev, "Request irq%d failedn", irq);
			goto out_region;
		}
	}

	pca_isa_data.i2c_clock = clock;
	if (i2c_pca_add_bus(&pca_isa_ops) < 0) {
		dev_err(dev, "Failed to add i2c busn");
		goto out_irq;
	}

	return 0;

 out_irq:
	if (irq > -1)
		free_irq(irq, &pca_isa_ops);
 out_region:
	release_region(base, IO_SIZE);
 out:
	return -ENODEV;
}
#endif

int global_clock;
int irq;
int global_id;
int global_dev;


void pca_isa_probe(int dev, int id){
    if (global_dev != dev) { 
        //assert(0); 
    } 
    if (irq > -1) { 
        if (global_id != id) {
            //assert(0);
        }
    } 
}
#if FULLCODE
static int __devexit pca_isa_remove(struct device *dev, unsigned int id)
{
	i2c_del_adapter(&pca_isa_ops);

	if (irq > -1) {
		disable_irq(irq);
		free_irq(irq, &pca_isa_ops);
	}
	release_region(base, IO_SIZE);

	return 0;
}

static struct isa_driver pca_isa_driver = {
	.match		= pca_isa_match,
	.probe		= pca_isa_probe,
	.remove		= __devexit_p(pca_isa_remove),
	.driver = {
		.owner	= THIS_MODULE,
		.name	= DRIVER,
	}
};
#endif

void pca_isa_init(int dev, int id) { 
    global_id = id; 
    global_dev = dev; 
}

void pca_isa_exit(void) {
    global_id = -1; 
    global_dev = -1; 
}

#if FULLCODE
static int __init pca_isa_init(void)
{
	return isa_register_driver(&pca_isa_driver, 1);
}

static void __exit pca_isa_exit(void)
{
	isa_unregister_driver(&pca_isa_driver);
}

MODULE_AUTHOR("Ian Campbell <icampbell@arcom.com>");
MODULE_DESCRIPTION("ISA base PCA9564/PCA9665 driver");
MODULE_LICENSE("GPL");

module_param(base, ulong, 0);
MODULE_PARM_DESC(base, "I/O base address");

module_param(irq, int, 0);
MODULE_PARM_DESC(irq, "IRQ");
module_param(clock, int, 0);
MODULE_PARM_DESC(clock, "Clock rate in hertz.ntt"
		"For PCA9564: 330000,288000,217000,146000,"
		"88000,59000,44000,36000n"
		"ttFor PCA9665:tStandard: 60300 - 100099n"
		"ttttFast: 100100 - 400099n"
		"ttttFast+: 400100 - 10000099n"
		"ttttTurbo: Up to 1265800");

module_init(pca_isa_init);
module_exit(pca_isa_exit);
#endif

#define LIMIT 20
int cnt1, cnt2, cnt3, cnt4, cnt5, cnt6, cnt7, cnt8;
int test_global_array[10000];
int test_global_var1;
int test_global_var2;
int test_global_var3;
int test_global_condition1;
int test_global_condition2;
int test_global_condition3;
int test_global_condition4;

void JudgeCondi(void);

void JudgeCondi(void) {
  int reader1, reader2;
  int reader3, reader4;

  if (test_global_condition1 == 1) reader1 = test_global_var1;
  if (test_global_condition2 == 1) reader2 = test_global_var1;

  reader3 = test_global_var2;
  reader4 = test_global_var2;
}

//priority 2
void *req1_isr(void *arg) {
    //while(cnt1< LIMIT) {
        irq = 0;
        pca_isa_init(1, 1);
        //pca_isa_probe(1, 1);
        pca_isa_exit();
        cnt1++;
	  if(irq == 0){
		JudgeCondi();
	  }
    //}
}
//priority 2
void *req2_isr(void *arg) {
    //while(cnt2 < LIMIT) {
        irq = 0;
        pca_isa_init(2, 2);
        //pca_isa_probe(2, 2);
        pca_isa_exit();
        cnt2++;
    //}
}
//priority 3
void *req3_isr(void *arg) {
    //while(cnt3 < LIMIT) {
        irq = 0;
        pca_isa_init(3, 3);
        //pca_isa_probe(3, 3);
        pca_isa_exit();
        cnt3++;
	  if(global_id == -1){
            test_global_var1 = 0x11;
	  }else{
		test_global_var2 = 0x22;
	  }
    //}
}
//priority 3
void *req4_isr(void *arg) {
    //while(cnt4 < LIMIT) {
        irq = 0;
        pca_isa_init(4, 4);
        //pca_isa_probe(4, 4);
        pca_isa_exit();
        cnt4++;
	  
    //}
}
//priority 4
void *req5_isr(void *arg) {
    //while(cnt5 < LIMIT) {
        irq = 0;
        pca_isa_init(5, 5);
        //pca_isa_probe(5, 5);
        pca_isa_exit();
        cnt5++;
	  
    //}
}
//priority 3
void *req6_isr(void *arg) {
    //while(cnt6 < LIMIT) {
        irq = -1;
	  if(irq == -1){
	  	test_global_var3 = 0x33;
	  }
        cnt6++;
    //}
}
//priority 5
void *req7_isr(void *arg) {
    //while(cnt7 < LIMIT) {
        irq = 0;
        pca_isa_init(7, 7);
        //pca_isa_probe(7, 7);
        pca_isa_exit();
        cnt7++;
	  //add by zhangyuan
 	  int i = 0;
    	  int maxnum, mininum;
    	  for (i = 0; i < 10000; i++) {
        	if (i == 9000) test_global_array[9000] = 1;
        	if (i == 10000 + 1) test_global_array[9000] = 1;
     	  }
   	 mininum = test_global_array[9000] - 10;
   	 maxnum = test_global_array[0] + 10; 
    //}
}
//priority 6
void *req8_isr(void *arg) {
    //while(cnt8 < LIMIT) {
        irq = 0;
        pca_isa_init(8, 8);
        pca_isa_probe(8, 8);
        pca_isa_exit();
        cnt8++;
	  //if(global_id == -1){
		 test_global_array[9000] = 999;
	 // }
	  
    //}
}

void *main_task(void *arg)
{
    disable_isr(-1);
    test_global_condition1 = 1;
    test_global_condition2 = 1;
    test_global_condition3 = 1;
    test_global_condition4 = 1;
    enable_isr(-1);

    return 0;

}

int main(){
  pthread_t t0, t1, t2, t3, t4, t5, t6, t7, t8;
  pthread_create(&t0, 0, main_task, 0);
  pthread_create(&t1, 0, req1_isr, 0);
  pthread_create(&t2, 0, req2_isr, 0);
  pthread_create(&t3, 0, req3_isr, 0);
  pthread_create(&t4, 0, req4_isr, 0);
  pthread_create(&t5, 0, req5_isr, 0);
  pthread_create(&t6, 0, req6_isr, 0);
  pthread_create(&t7, 0, req7_isr, 0);
  pthread_create(&t8, 0, req8_isr, 0);
}
