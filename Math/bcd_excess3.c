#include <stdio.h>
void main()
{
    int B[4] = { 0, 1, 1, 1};
    int E[4];
    int A[] = { 0, 0, 1, 1};
    int C =0;
    int K;
    for (K = 3; K >= 0; K--){
        int S = B[K] + A[K] + C;
        if (S > 1){
            E[K] = S % 2;
            C = 1;
        }
        else {
            E[K] = S;
            C = 0;
        }
    }
    for (K = 0; K <= 3; K++)
        printf("%d", E[K]);
    printf("\n");
}