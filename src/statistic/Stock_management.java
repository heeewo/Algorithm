package statistic;

public class Stock_management {
    public static void main(String[] args){

    int N[] = new int[301];
    int S[] = { 300, 170, 250, 230, 280, 285, 300, 300, 200, 230, 230, 170, 300, 190, 240, 250, 240, 300, 275, 265};
    int F;
    for (F = 170; F <= 300; F += 5)
        N[F] = 0;
    for (int i = 0; i < 20; i++){
        F = S[i];
        N[F]++;
    }
    for (F = 170; F <= 300; F += 5){
        if (N[F] != 0)
            System.out.printf("%d : %d\n", F, N[F]);
    }
    }
}
