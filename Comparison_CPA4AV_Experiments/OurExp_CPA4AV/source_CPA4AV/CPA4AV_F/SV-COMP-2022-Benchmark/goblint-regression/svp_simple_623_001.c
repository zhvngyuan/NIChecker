
extern void abort(void);
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }



int g = 0; 

void svp_simple_623_001_isr_1(void *arg) {
  g = 1;
  g = 0;
}

int svp_simple_623_001_main(void) {

  __VERIFIER_assert(g == 0);

  return 0;
}
