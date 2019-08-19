package sequence;

public class Primary {
    public static void main(String[] args) {
        int SUM = 0;
        int N = 1;
        while(true){
            SUM = SUM + N;
            N = N + 1;
            if( N > 100) break;
            
        }
        System.out.println(SUM);
    }
}
