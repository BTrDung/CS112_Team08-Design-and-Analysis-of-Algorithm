import java.util.*;
public class D {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int [n];
        for (int i = 0; i < n; i+=1){
            int x = sc.nextInt();
            a[i] = x;
        }
        Arrays.sort(a);
        System.out.println(a[0] + a[n - 1]);
        sc.close();
    }
}
