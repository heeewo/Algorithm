#include <stdio.h>

void main(){
    int E[5] = {95, 75, 85, 100, 50};
    int i  =  0;
    int Temp;
    int a;
    do {
        int j = i + 1;
        do {
            if (E[i] > E[j]){
                Temp = E[i];
                E[i] = E[j];
                E[j] = Temp;
            }
            j++;
        }while(j<5);
        i++;
    }while (i<4);
    for (a = 0; a < 5; a++)
        printf("%d\t", E[a]);
    printf("\n");
}