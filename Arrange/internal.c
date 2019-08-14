#include <stdio.h>

void main()
{
    int A[2][4] = {5, 7, -3, 4, 2, -5, 3, 6};
    int B[4][3] = {3, 0, 8, -5, 1, -1, 7, 4, 4, 2, 4, 3};
    int S[2][3] = {0};
    int R, C, K;
    for (R = 0; R <= 1; R++){
        for (C = 0; C <= 2; C++){
            S[R][C] = 0;
            for (K = 0; K <= 3; K++){
                S[R][C] = S[R][C] + (A[R][K] * B[K][C]);
            }
        }
    }
    for(R = 0; R <=1; R++){
        for (C = 0; C <= 2; C++){
            printf("%d\t", S[R][C]);
        }
        printf("\n");
    }
}