package arrange;

public class Magicsquare {
    public static void main(String[] args){
      
    int S[][] = new int[5][5];
    int R = 0, C = 2;
    for (int N = 1; N <= 25; N++){
        S[R][C] = N;
        int NR = R - 1;
        int NC = C + 1;
        if (NR == -1)
            NR = 4;
        if (NC == 5)
            NC = 0;
        if (S[NR][NC] == 0){
            R = NR;
            C = NC;
        }
        else
            R++;
    }
    for (int NR = 0; NR <= 4; NR ++) {
        for (int NC = 0; NC <= 4; NC++){
            System.out.printf("%d\t", S[NR][NC]);
        }
        System.out.println("");
    }
    }
}
