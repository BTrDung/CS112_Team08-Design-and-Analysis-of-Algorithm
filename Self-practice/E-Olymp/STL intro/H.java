import java.util.*;
public class H {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0){
            t-=1;
            Set<String> ans = new HashSet<String>();
            int n = sc.nextInt();
            while(n >= 0){
                n -= 1;
                String tmp = sc.nextLine();
                ans.add(tmp);
            }
            System.out.println(ans.size() - 1);
        }
        sc.close();
    }
}