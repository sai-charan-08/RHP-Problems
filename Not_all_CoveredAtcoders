import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m= sc.nextInt();
        int[] psum= new int[n+2];
        while(m-->0){
            int l=sc.nextInt();
            int r=sc.nextInt();
            psum[l]++;
            psum[r+1]--;

        }
        int minval=500000;
        for(int w=1; w<=n; w++){
            psum[w]+=psum[w-1];
            minval=Math.min(minval,psum[w]);
        }
        System.out.println(minval);
    }
}
