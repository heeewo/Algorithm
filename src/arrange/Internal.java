package arrange;

public class Internal {
    public static void main(String[] args){
  
    int A[][] = {{5, 7, -3, 4}, {2, -5, 3, 6}};
    int B[][] = {{3, 0, 8}, {-5, 1, -1}, {7, 4, 4}, {2, 4, 3}};
    int S[][] = new int[2][3];

    for (int R = 0; R <= 1; R++){
        for (int C = 0; C <= 2; C++){
            S[R][C] = 0;
            for (int K = 0; K <= 3; K++){
                S[R][C] = S[R][C] + (A[R][K] * B[K][C]);
            }
        }
    }
    for(int R = 0; R <=1; R++){
        for (int C = 0; C <= 2; C++){
            System.out.printf("%d\t", S[R][C]);
        }
        System.out.println("");
    }
    }
}
