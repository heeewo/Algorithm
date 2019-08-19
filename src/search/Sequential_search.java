package search;

import java.util.Scanner;

public class Sequential_search {
    public static void main(String[] args){

    int A[] = new int[25];
    int R[] = new int[25];
    Scanner sc = new Scanner(System.in);
    
    for (int i = 0; i < 25; i++){
        A[i] = sc.nextInt();
        R[i] = 1;
    }
    
    for (int i = 0; i < 25; i++){
        for (int j =0; j < 25; j++){
            if (A[i] < A[j])
                R[i]++;
        }
    }
    for (int i = 0; i < 25; i++)
        System.out.printf("%d : %d\n", A[i], R[i]);
    }
}
