#include <stdio.h>

void main()
{
    int A[10] = {21, 17, 4, 51, 24, 75, 40, 27, 48, 72};
    int CNT = 0;
    int i  = 0;
    do {
        int N3 = A[i] % 3;
        int N4 = A[i] % 4;
        int N = N3 + N4;
        if (N == 0)
            CNT++;
        
        i++;
    }while(i<10);
    printf("%d\n", CNT);
}