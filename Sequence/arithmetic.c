#include <stdio.h>

void main(){

   int A = 2;
   int D = 6;
   int S = A;
   int N = 2;
   int AN = 0;
   while(1) {
       AN = A + (N-1)*D;
       S = S + AN;
       N = N + 1;
       if ( N > 200 ) break;
       
   }
   printf("%d\n", S);
}