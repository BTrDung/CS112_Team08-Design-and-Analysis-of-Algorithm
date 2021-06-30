import java.util.*;
public class C {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; ++i){
            int x = sc.nextInt();
            a[i] = x;
        }
        Boolean flag = true;
        int tmp = a[1] - a[0];
        for (int i = 2; i < n; ++i){
            if (a[i] - a[i - 1] > tmp){
                flag=false;
                break;
            }
            tmp = a[i] - a[i - 1];
        }
        System.out.println(flag==true?"yes":"no"); 
        sc.close();
    }

}