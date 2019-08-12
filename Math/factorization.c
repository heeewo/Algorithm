#include <stdio.h>

void main()
{
    int A[20];
    int N=20;
    int T = 0;
    do {
        if (N >= 2) {
            int P = 2;
            for ( ; P <= N; P++){
                if (N % P == 0)
                    break;
            }
            A[T] = P;
            N = N / P;
            T++;
        }
    }while (N != 1);
    if (T== 1)
        printf("소수\n");
    else {
        int J;
        for(J = 0; J < T-1; J++){
            printf("%d*", A[J]);
        }
        printf("%d\n", A[T-1]);
        }
}