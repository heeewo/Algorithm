#include <stdio.h>
#include <stdlib.h>

void main(){
    int T[10];
    int S = 0;
    int i = 0;
    for(i = 0; i<10; i++){
        T[i] = (rand()%120) + 1;
        printf("T[%d] : %d\n", i, T[i]);
    }
    i = 0;
    do{
        S += T[i];
        i++;
    }while(i<10);
    double M = S / 10;
    int CNT =0;
    i = 0;
    do{
        if (T[i] > M)
            CNT++;
        i++;
    }while (i < 10);
    printf("점수 평균 : %.2lf\n평균점보다 높은 학생 수 : %d\n", M, CNT);
}