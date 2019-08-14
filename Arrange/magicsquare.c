#include <stdio.h>

void main(){
    int S[5][5] = {0};
    int R = 0, C = 2;
    int N;
    int NR;
    int NC;
    for (N = 1; N <= 25; N++){
        S[R][C] = N;
        int NR = R - 1;
        int NC = C + 1;
        if (NR == -1)
            NR = 4;
        if (NC == 5)
            NC = 0;
        if (S[NR][NC] == 0){
            R = NR;
            C = NC;
        }
        else
            R++;
    }
    for (NR = 0; NR <= 4; NR ++) {
        for (NC = 0; NC <= 4; NC++){
            printf("%d\t", S[NR][NC]);
        }
        printf("\n");
    }
}