package sequence;

public class Fibonacci {
    public static void main(String[] args){
    
    int A =1, B = 1, S = A + B;
    int N = 2;
    int C = 0;
    while(true) {
        C = A + B;
        S += C;
        A = B;
        B = C;
        N++;
        if( N == 100) break;
    }
        System.out.println(S);
    }
}
