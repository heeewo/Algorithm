package math;

public class Parity_code {
    public static void main(String[] args){

    int P[] = {0, 1, 0, 0, 1, 0, 0, 0, 1};
    int PN = 0;
    for (int K = 1; K < 9; K++){
        if (P[K] == 1)
            PN++;
    }
    int E = PN % 2;
    if (P[0] == E)
        System.out.println("오류 미발견");
    else
        System.out.print("오류 발견\n");
    }
}
