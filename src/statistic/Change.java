package statistic;

public class Change {
    public static void main(String[] args){

    int P[] = new int[9];
    int T[] = new int[9];
    int C = 532263;
    int R = C;
    int M = 10000;
    int SW = 1;
    for(int K = 0; K < 9; K++){
        P[K] = R/M;
        T[K] = T[K]+P[K];
        R = R-(P[K]*M);
        if (SW == 1) {
            M = M/2;
            SW = 0;
        }else {
            M = M/5;
            SW = 1;
        }
    }
    System.out.printf("만원\t오천원\t천원\t오백원\t백원\t오십원\t십원\t오원\t일원\n");
    System.out.printf("---------------------------------------------------------------------\n");
    for(int i = 0; i<9; i++)
        System.out.printf("%d\t", P[i]);
    System.out.println("");
    
    }
}
