#include <stdio.h>

void main()
{
    int N = 1;
    int F = 1;
    int S = 1;
    while(1) {
        N++;
        F *= N;
        S += F;
        if ( N == 100 ) break;
    }
    printf("%d\n", S);
}