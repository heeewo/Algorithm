#include <stdio.h>
void main()
{
    int A[5][5] = {0};
    int V = 1;
    int R = 0;
    int C;
    do{
        C=R;
        do {
            A[R][C] = V;
            V++;
            C++;
        }while (C <= 4);
        R++;
    }while(R<=4);
    
    for (R=0; R<5; R++){
        for(C=0; C<5; C++)
            printf("%d\t", A[R][C]);
        printf("\n");
    }
}