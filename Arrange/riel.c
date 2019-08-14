#include <stdio.h>

void main(){
    int A[5][5];
    int V=1, D=1;
    int C1=0, C2=4;
    int R;int C;
    for(R=0; R<5; R++){
        for(C=C1; C!=C2+D; C=C+D){
            A[R][C] = V;
            V = V + 1;
        }
        int Temp = C1;
        C1 = C2;
        C2 = Temp;
        D = -D;
    }
    int i;
    int j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
}