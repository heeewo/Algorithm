#include <stdio.h>

void main(){
    int A[5][5];
    int N = 0, S = 1, i = 0, j = -1, K = 5;
    
    while(1) {
        int P;
        for(P=0; P<K; P++){
            N = N + 1;
            j = j + S;
            A[i][j] = N;
        }
        K = K -1;
        if (K <= 0) break;
        for(P=0; P<K; P++){
            N = N + 1;
            i = i + S;
            A[i][j] = N;
        }
        S = S * (-1);
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j<5; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
}