package math;

public class Euclidean {
    public static void main(String[] args){
    
    int X=60, Y=124;
    if (X < Y) {
        int TEMP = X;
        X = Y;
        Y = TEMP;
    }
    for ( ; ; ){
        int M = X % Y;
        if (M == 0)
            break;
        X = Y;
        Y = M;
    }
    System.out.println(Y);
    }
}
