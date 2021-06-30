import java.util.*;
public class A {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double sum = 0;
        while (n > 0){
            n-=1;
            double x;
            x = sc.nextDouble();
            sum += x;
        }
        System.out.printf("%.1f", sum);
        sc.close();
    }
}