import java.util.Scanner;

public class revdigit {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        int nn=0;
        int r;
        while (n!=0){
            r=n%10;
            nn=r+nn*10;
            n=n/10;
        }
        System.out.println("The reverse of the number is :"+nn);
        sc.close();
    }
}
