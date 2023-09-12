import java.util.Scanner;
public class cno{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n=sc.nextInt();
        int c=0;
        int nn=n;
        while (n!=0){
            c=c+1;
            n=n/10;
        }
        System.out.println("The number of digits in "+nn+" is :"+c);
        sc.close();
    }
}