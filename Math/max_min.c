#include <stdio.h>

void main()
{
    int M = 0;
    int i = 0;
    int ENG[10] = {70, 60, 55, 90, 85, 75, 80, 100, 95, 45};
    int MATH[10] = {90, 45, 60, 77, 85, 65, 80, 95, 80, 55};
    
    while(1){
        if (ENG[i] == 100) {
            if (MATH[i] > M)
                M = MATH[i];
        }
        i++;
        if ( i >= 10 ) break;
    }
    printf("%d\n", M);
}