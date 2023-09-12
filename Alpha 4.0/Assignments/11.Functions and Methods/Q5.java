
import java.util.Scanner;


public class Q5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        int sum=0;
        int remainder;
        while(n!=0){
            remainder=n%10;
            sum=sum+remainder;
            n=n/10;
        }
        System.out.println("The sum of the digits of the given number is:"+sum);
        sc.close();
    }
}
