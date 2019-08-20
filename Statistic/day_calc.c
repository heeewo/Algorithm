#include <stdio.h>
void main(){
    int MD[] = {31, 28,31,30,31, 30, 31, 31, 30, 31, 30, 31};
    char* WD[] = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
    int M, D;

    printf("월 : ");
    scanf("%d", &M);
    printf("일 : ");
    scanf("%d", &D);
    if (D == 0)
        return 0;
    int NAL = 0;
    int DAL = M -1;
    if (DAL != 0) {
        int i  = 0;
        do {
            NAL += MD[i];
            i++;
        }while(i <= (DAL -1));
    }
    NAL = NAL + D -1;
    int V = NAL / 7;
    V *= 7;
    int W = NAL - V;
    int X = W +3;
    if (X > 7)
        X-=7;
    printf("%s\n", WD[X-1]);
}