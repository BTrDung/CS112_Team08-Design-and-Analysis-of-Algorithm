import java.util.*;
public class G {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Set<Integer> ans = new HashSet<Integer>();
        int n = sc.nextInt();
        for (int i = 0; i < n; i += 1){
            int x = sc.nextInt();
            ans.add(x);
        }
        System.out.println(ans.size());
        sc.close();
    }
}
