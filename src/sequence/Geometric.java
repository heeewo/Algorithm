package sequence;

public class Geometric {
    public static void main(String[] args){
    int R = 3;
    int A = 2;
    int S = A;
    int N = 2;
    while(true) {
        A = A * R;
        S = S + A;
        N = N + 1;
        if( N > 100 ) break;
    }
    System.out.println(S);
    }
}
