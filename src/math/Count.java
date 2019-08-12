package math;

public class Count {
    public static void main(String[] args){
    
    int JUMSU[] = {70, 60, 55, 90, 85, 75, 80, 100, 95, 45};
    int CNT = 0;
    int i = 0;
    while(true) {
        if (JUMSU[i] >= 80)
            CNT++;
        i++;
        if ( i >= 10 ) break;
    }
    System.out.println(CNT);
    }
}
