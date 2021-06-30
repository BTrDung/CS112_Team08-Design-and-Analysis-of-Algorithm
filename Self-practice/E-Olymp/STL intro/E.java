import java.util.*;
public class E {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Set<Integer> ans = new TreeSet<Integer>();
        int n = sc.nextInt();
        for (int i = 0; i < n; i += 1){
            int x = sc.nextInt();
            ans.add(x);
        }
        int m = sc.nextInt();
        for (int i = 0; i < m; i += 1){
            int x = sc.nextInt();
            ans.add(x);
        }          
        for (int i : ans){
            System.out.printf("%d ", i);
        }
        sc.close();
    }
}
