import java.util.Scanner;
public class sumdigits {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        int s=0;
        int r;
        while (n!=0){
            r=n%10;
            s=s+r;
            n=n/10;
        }
        System.out.println("The sum of the digits of the number is :"+s);
        sc.close();


    }

}
