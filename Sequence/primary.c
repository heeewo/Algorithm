#include <stdio.h>

main(){

    int SUM = 0;
    int N = 1;
    while(1){
            SUM = SUM + N;
            N = N + 1;
            if( N > 100) break;  
    }
    printf("%d\n", SUM);
}