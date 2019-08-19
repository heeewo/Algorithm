package math;

public class Complement_of_1_2 {
    public static void main(String[] args){
            
    int B[] = {0, 1, 0, 1, 0};
    int O[] = new int[5];
    int T[] = new int[5];
    int i = 0;
    do {
        O[i] = 1 - B[i];
        i++;
    }while (i < 5);
    i = 4;
    int C = 1;
    do {
        T[i] = 1;
        if (O[i] == C)
            T[i] = 0;
        C = O[i] * C;
        i--;
    } while (i >= 0);
    int a;
    for(a = 0; a < 5; a++)
        System.out.print(T[a]);
    System.out.println();
    }
}
