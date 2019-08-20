package statistic;

import java.util.Scanner;

public class Day_calc {
    public static void main(String[] args){
 
    int MD[] = {31, 28,31,30,31, 30, 31, 31, 30, 31, 30, 31};
    String WD[] = {"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일"};
    int M, D;
    Scanner sc = new Scanner(System.in);

    System.out.print("월 : ");
    M = sc.nextInt();
    System.out.print("일 : ");
    D = sc.nextInt();
    if (D == 0)
        return ;
    int NAL = 0;
    int DAL = M -1;
    if (DAL != 0) {
        int i  = 0;
        do {
            NAL += MD[i];
            i++;
        }while(i <= (DAL -1));
    }
    NAL = NAL + D -1;
    int V = NAL / 7;
    V *= 7;
    int W = NAL - V;
    int X = W +3;
    if (X > 7)
        X-=7;
    System.out.printf("%s\n", WD[X-1]);
    }
}
