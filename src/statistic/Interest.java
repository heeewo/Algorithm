package statistic;

public class Interest {
    public static void main(String[] args){

    double R = 0.05;
    int M = 100000;
    int Y = 5;
    
    double K = 1;
    int i = 1;
    double T;
    do {
        K *=(1+R);
        T = M*K;
        System.out.printf("%d %f\n", i, T);
        i++;
    }while (i <= Y);
    }
}
