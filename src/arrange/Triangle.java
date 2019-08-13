package arrange;

public class Triangle {
    public static void main(String[] args){
     
    int A[][] = new int[5][5];
    int V = 1;
    int R = 0;
    int C;
    do{
        C=R;
        do {
            A[R][C] = V;
            V++;
            C++;
        }while (C <= 4);
        R++;
    }while(R<=4);
    
    for (R=0; R<5; R++){
        for(C=0; C<5; C++)
            System.out.printf("%d\t", A[R][C]);
        System.out.println("");
    }
    }
}
