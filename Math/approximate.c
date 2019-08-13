#include <stdio.h>

void main()
{
    int A[10] = {131, 450, -100, 150, 50, -10, 0, 40, 32, 1};
    int MinCha = 533;
    int N = 0, Ans = N;
    int Cha = 0;
    do {
        if (A[N] >= 33)
            Cha = A[N] - 33;
        else
            Cha = 33 - A[N];
        if (Cha < MinCha){
            MinCha = Cha;
            Ans = N;
        }
        N++;
    }while(N < 10);
    printf("%d\n", (Ans+1));
}