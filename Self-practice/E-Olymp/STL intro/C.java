import java.util.*;
public class C {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int [n];
        for (int i = 0; i < n; i+=1){
            int x = sc.nextInt();
            a[i] = x;
        }
        Arrays.sort(a);
        int maxx = a[n - 1], sum = 0;
        for (int i = 0; i < n - 1; i += 1){
            sum += a[i] == maxx ? 0 : a[i];
        }
        System.out.println(sum);
        sc.close();
    }
}
