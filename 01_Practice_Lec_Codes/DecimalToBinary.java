
import java.util.Scanner;

public class DecimalToBinary {

    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     System.out.println("Enter the number");
     int n = sc.nextInt();
     sc.close();
       int ans = 0;
     int i =0;
     int num = 10;
     while (n!=0) {
        int Bit = n & 1;
         ans = Bit*(int) ((Math.pow(num, i))) + ans;
        n = n>>1;
        i++;
     }
    
     System.out.println(ans);


    }
    }

    

