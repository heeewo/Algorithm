#include <stdio.h>

void main(){
    int E[5]={95,75,85,100,50};
    int i;
    int j, KEY;
    for(i=1; i<5; i++){
        KEY = E[i];
        for(j=i-1; j>=0; j--){
            if (E[j] <= KEY) break;
            E[j+1] = E[j];
        }
        E[j+1] = KEY;
    }
    for (i = 0; i < 5; i++)
        printf("%d\t", E[i]);
    printf("\n");
}