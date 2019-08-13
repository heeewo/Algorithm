#include <stdio.h>

void main(){
    int A[5][5] = {0};
    int V =1;
    int M =3;
    int R;
    int C;
    for (R = 0; R < M; R++){
        for (C = R; C < (5 - R); C++){
            A[R][C] = V;
            V++;
        }
    }
    for (R = M; R <= 4; R++){
        for (C = (4 - R); C <= R; C++){
            A[R][C] = V;
            V++;
        }
    }
    for (R=0; R<5; R++){
        for(C=0; C<5; C++)
            printf("%d\t", A[R][C]);
        printf("\n");
    }
}