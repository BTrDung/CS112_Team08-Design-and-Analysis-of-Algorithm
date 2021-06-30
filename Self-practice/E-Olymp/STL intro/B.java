import java.util.*;
public class B {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        while (x > 0){
            x-=1;
            int n = sc.nextInt();
            System.out.printf("%d ", n >= 0 ? n += 2 : n);
        }
        sc.close();
    }
}