#include <stdio.h>

void main()
{
    int R = 3;
    int A = 2;
    int S = A;
    int N = 2;
    while(1) {
        A = A * R;
        S = S + A;
        N = N + 1;
        if( N > 100 ) break;
        printf("%d\n", S);
    }
    printf("%d\n", S);
}