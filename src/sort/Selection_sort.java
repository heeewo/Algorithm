package sort;

public class Selection_sort {
    public static void main(String[] args){
    
    int E[] = {95, 75, 85, 100, 50};
    int i  =  0;
    int Temp;

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
    for (int a = 0; a < 5; a++)
        System.out.printf("%d\t", E[a]);
    System.out.println("");
    }
}
