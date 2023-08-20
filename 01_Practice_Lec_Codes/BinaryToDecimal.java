import java.util.Scanner;
public class BinaryToDecimal {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.close();

        int i =0;
        int ans = 0;
        while (n!=0) {
            int digit = n%10;
            if(digit==1){
                ans = ans + (int )Math.pow(2,i);
            }
            n = n/10;

            i++;
        }
        System.out.println(ans);

    }
}
