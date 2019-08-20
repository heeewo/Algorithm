package statistic;

public class Statistic_primary {
    public static void main(String[] args){

    int T[] = new int[10];
    int S = 0;
    for(int i = 0; i<10; i++){
        T[i] = (int)(Math.random()*120) + 1;
        System.out.printf("T[%d] : %d\n", i, T[i]);
    }
    int i = 0;
    do{
        S += T[i];
        i++;
    }while(i<10);
    double M = S / 10;
    int CNT =0;
    i = 0;
    do{
        if (T[i] > M)
            CNT++;
        i++;
    }while (i < 10);
    System.out.printf("점수 평균 : %.2f\n평균점보다 높은 학생 수 : %d\n", M, CNT);
    }
}
