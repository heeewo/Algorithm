#include <stdio.h>

void main()
{
    int A =1, B = 1, S = A + B;
    int N = 2;
    int C = 0;
    while(1) {
        C = A + B;
        S += C;
        A = B;
        B = C;
        N++;
        if( N == 100) break;
    }
    printf("%d\n", S);
}