#include <stdio.h>

void main()
{
    double T[30]= {184, 240, 9, 235, 333, 295, 20, 38, 329, 34, 350, 59, 313, 24, 187, 327, 234, 59, 324, 47, 145, 95, 282, 148, 213, 182, 283, 227, 156, 217};
    int Sum = 0;
    int N = 0;
    int i = 0;
    while(1) {
        if (T[i] > 200) {
            Sum += T[i];
            N++;
        }
        i++;
        if ( i >= 30 ) break;
    }
    double Avg = (double) Sum / N;
    printf("%.2f\n", Avg);
}