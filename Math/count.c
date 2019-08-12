#include <stdio.h>
void main()
{
    int JUMSU[10] = { 70, 60, 55, 90, 85, 75, 80, 100, 95, 45};
    int CNT = 0;
    int i = 0;
    while(1) {
        if (JUMSU[i] >= 80)
            CNT++;
        i++;
        if ( i >= 10 ) break;
    }
    printf("%d\n0", CNT);
}