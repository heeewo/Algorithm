#include <stdio.h>

void main()
{
    int P[9] = {0, 1, 0, 0, 1, 0, 0, 0, 1};
    int PN = 0;
    int K;
    for (K = 1; K < 9; K++){
        if (P[K] == 1)
            PN++;
    }
    int E = PN % 2;
    if (P[0] == E)
        printf("오류 미발견\n");
    else
        printf("오류 발견\n");
}