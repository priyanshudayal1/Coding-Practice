import java.util.Scanner;

public class revno {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n =sc.nextInt();
        int rev=0;
        while (n!=0){
            int ld=n%10;
            rev=rev*10+ld;
            n=n /10;
        }
        System.out.println("The reverse of the given number is :"+rev);
        sc.close();
    }    
}
