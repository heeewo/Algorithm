package sort;

public class Merge_sort {
    public static void main(String[] args){
    
    int A[] = {2, 5, 10, 17, 20};
    int B[] = {11, 9, 8, 7};
    int M = 5;
    int N = 4;
    int C[] = new int[9];
    int iA = 0, iB = N -1, iC = 0;
    int Done = 0;
    for (;;){
        if (A[iA] < B[iB]){
            C[iC] = A[iA];
            iA++;
            iC++;
            if (iA > M - 1){
                if (Done == 0){
                    A[M-1] = 999999;
                    iA = M - 1;
                    Done = 1;
                }
                else
                    break;
            }
        }
        else {
            C[iC] = B[iB];
            iB--;
            iC++;
            if (iB < 0){
                if (Done == 0){
                    B[0] = 999999;
                    iB = 0;
                    Done = 1;
                }
                else
                    break;
            }
        }
    }
    for (int a = 0; a < M + N; a++)
        System.out.printf("%d\t",C[a]);
    System.out.println("");
    }
}
