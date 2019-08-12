package sequence;

class Fact{
    static int calculate(int n){
        return (n > 0) ? n * calculate(n-1) : 1;
    }
    
}

public class Factorial {
    public static void main(String[] args){
        int N = 3;
        int S = 1;
        while(true){
            S = S + Fact.calculate(N);
            N--;
            if (N <= 1) break;
        }
        System.out.println(S);
    }
}
