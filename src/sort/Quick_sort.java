package sort;
public class Quick_sort {
    public static void QSORT(int E[], int L, int R){

    int TEMP;
    if (L >= R) return;
    int P = E[L];
    int i = L + 1;
    int j = R;
    
    while(true) {
        while(P > E[i] && i < R) i++;
        while(P < E[j] && j > L) j--;
        if(i >= j ) break;
        TEMP = E[i];
        E[i] = E[j];
        E[j] = TEMP;
    }
    
    TEMP = E[j];
    E[j] = E[L];
    E[L] = TEMP;
    
    QSORT(E, L, j-1);
    QSORT(E, j+1, R);
}


    public static void main(String[] args){
 
    int E[] = {25, 14, 100, 95, 22, 17, 48, 20, 50, 90};
    for (int i = 0; i < 10; i++)
        System.out.printf("%d\t", E[i]);
    System.out.println("");
    
    QSORT(E, 0, 9);
    
    for (int i = 0; i < 10; i++)
        System.out.printf("%d\t", E[i]);
    System.out.println("");
    }
}
