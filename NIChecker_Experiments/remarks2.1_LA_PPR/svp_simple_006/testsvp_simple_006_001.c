volatile int svp_simple_006_001_global_var1;
volatile int svp_simple_006_001_global_var2;
volatile unsigned char flag = 0x55;
void main() {
  //init();
  int reader1, reader2, reader3;
  
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
      if (i == j) {
          if (i == 0)
          reader1 = svp_simple_006_001_global_var1;
        else if (i == 4){
          reader2 = svp_simple_006_001_global_var1;
       }
        else if (i == 6){
          reader2 = svp_simple_006_001_global_var1;
          }
      }
    }
  /*
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) {
      if (((i + j) == 6) && (i < j))
        svp_simple_006_001_global_var2 = 0x02;
    }*/
}
//priority 1
void svp_simple_006_001_isr_1() {
  int reader2;
  idlerun();

  svp_simple_006_001_global_var1 = 1;//svp_simple_006_001_global_var1 = 0;
  reader2 = svp_simple_006_001_global_var2;
}