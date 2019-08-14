#include <stdio.h>

void main(){
    int A[5][5] = {0};
    int V = 1;
    int M = 2;
    int CL = M, CR = M;
    int R;
    int C;
    for (R = 0; R <= 4; R++){
        for(C = CL; C <= CR; C++){
            A[R][C] = V;
            V += 2;
        }
        if (R < M){
            CL--;
            CR++;
        }
        else {
            CL++;
            CR--;
        }
    }
    for (R=0; R<5; R++){
        for(C=0; C<5; C++)
            printf("%d\t", A[R][C]);
        printf("\n");
    }
}