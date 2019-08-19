#include <stdio.h>

int main(){
    int A[25];
    int R[25];
    int i, j;
    for (i = 0; i < 25; i++){
        scanf("%d", &A[i]);
        R[i] = 1;
    }
    
    for (i = 0; i < 25; i++){
        for (j =0; j < 25; j++){
            if (A[i] < A[j])
                R[i]++;
        }
    }
    for (i = 0; i < 25; i++)
        printf("%d : %d\n", A[i], R[i]);
}