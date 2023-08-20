/**
 * NegativeToBinary
 */
public class NegativeToBinary {
    
    public static void main(String[] args) {
        int n = 6;
       int c;
        c = ~n;
       
       int i =0;
       int ans = 0;
       while (c!=0){
        int bit = c&1;
        ans = bit * (int) Math.pow(10,i) + ans;
        c = c >> 1;
        i++;

       }

       ans = ans+1;
       System.out.println(ans);
    }
    
}