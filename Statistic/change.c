#include <stdio.h>

void main(){
    int P[9] = {0};
    int T[9] = {0};
    int C = 532263;
    int R = C;
    int M = 10000;
    int SW = 1;
    int K;
    for(K = 0; K < 9; K++){
        P[K] = R/M;
        T[K] = T[K]+P[K];
        R = R-(P[K]*M);
        if (SW == 1) {
            M = M/2;
            SW = 0;
        }else {
            M = M/5;
            SW = 1;
        }
    }
    printf("만원\t오천원\t천원\t오백원\t백원\t오십원\t십원\t오원\t일원\n");
    printf("--------------------------------------------------------------------\n");
    int i;
    for(i = 0; i<9; i++)
        printf("%d\t", P[i]);
    printf("\n");
    
}