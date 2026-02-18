
/*
 * Factorial
 */

#include <stdio.h>

int main( void ) {
   int f[20];
   f[0] = 1;
   for( int k=1; k<20; ++k ) {
      f[k] = f[k-1] * k;
   }
   for( int k=0; k<20; k++ ) {
      printf("%d! = %d\n", k, f[k]);
   }
   /*
   Code to compute the factorial of each array index
   Print your final answer
   */
   return 0;
}
