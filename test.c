/**
 * we need a placeholder at the start for zero so ##_VA_ARGS__ has something to consume
 * then the arguments are pushed out in such a way that 'cnt' ends up with the right count.
 */
#define COUNT_ARGS(...) COUNT_ARGS_(,##__VA_ARGS__,6,5,4,3,2,1,0)
#define COUNT_ARGS_(z,a,b,c,d,e,f,cnt,...) cnt


#define C_ASSERT(test) \
    switch(0) {\
      case 0:\
      case test:;\
    }

int main() {
   C_ASSERT(0 ==  COUNT_ARGS());
   C_ASSERT(1 ==  COUNT_ARGS(a));
   C_ASSERT(2 ==  COUNT_ARGS(a,b));
   C_ASSERT(3 ==  COUNT_ARGS(a,b,c));
   C_ASSERT(4 ==  COUNT_ARGS(a,b,c,d));
   C_ASSERT(5 ==  COUNT_ARGS(a,b,c,d,e));
   C_ASSERT(6 ==  COUNT_ARGS(a,b,c,d,e,g));
   return 0;
}
