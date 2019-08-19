package sort;

public class Buble_sort {
    public static void main(String[] args){

    int E[]={95,75,85,100,50};
    int i = 0;
    int Temp;
    do {
        int j = 0;
        do {
            if (E[j] > E[j+1]){
                Temp = E[j];
                E[j] = E[j+1];
                E[j+1] = Temp;
            }
            j++;
        }while(j < 4 - i);
        i++;
    }while (i < 4);
    for (i = 0; i < 5; i++)
        System.out.printf("%d\t", E[i]);
    System.out.println("");

    }
}
