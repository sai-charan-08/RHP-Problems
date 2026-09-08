import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n+1];
        for(int i=1; i<=n; i++){
            arr[i]=sc.nextInt();
        }
        int samecnt=0;int exgcnt=0;
        for(int i=1; i<=n; i++){
            if(i==arr[i]){
                samecnt++;
            }
            else if(i==arr[arr[i]]){
                exgcnt++;
            }
        }
        System.out.println(exgcnt/2 + 1L*samecnt*(samecnt-1)/2);
    }
}
