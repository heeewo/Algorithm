#include <stdio.h>
void main()
{
    int A[5][5];
    int V = 0;
    int C = 0;
    do {
        int R = 0;
        do {
            V++;
            A[R][C] = V;
            R++;
        }while(R <= 4);
        C = C + 1;
    }while (C <= 4);
    
    int R;
    for(R = 0; R<5; R++){
        for(C=0; C<5; C++)
            printf("%d\t", A[R][C]);
        printf("\n");
    }
}