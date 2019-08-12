package math;

public class Max_Min {
    public static void main(String[] args){
            int M = 0;
    int i = 0;
    int ENG[] = {70, 60, 55, 90, 85, 75, 80, 100, 95, 45};
    int MATH[] = {90, 45, 60, 77, 85, 65, 80, 95, 80, 55};
    
    while(true){
        if (ENG[i] == 100) {
            if (MATH[i] > M)
                M = MATH[i];
        }
        i++;
        if ( i >= 10 ) break;
    }
    System.out.println(M);
    }
}
