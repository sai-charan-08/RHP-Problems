import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class MEX_Multiset {

    static void solve(Scanner sc) {

        int N = sc.nextInt();

        int[] arr = new int[N];

        ArrayList<Integer> zi = new ArrayList<>();

        // Store positions of all zeros
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();

            if (arr[i] == 0) {
                zi.add(i);
            }
        }

        // Exactly one zero -> impossible
        if (zi.size() == 1) {
            System.out.println("NO");
            return;
        }

        // Initially put everything in C
        char[] s = new char[N];
        Arrays.fill(s, 'C');

        // If there are zeros
        if (zi.size() > 0) {

            // First zero -> B
            int firstZeroIndex = zi.get(0);
            s[firstZeroIndex] = 'B';

            // Remaining zeros -> A
            for (int i = 1; i < zi.size(); i++) {
                s[zi.get(i)] = 'A';
            }
        }

        System.out.println("YES");
        System.out.println(new String(s));
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            solve(sc);
        }

        sc.close();
    }
}
