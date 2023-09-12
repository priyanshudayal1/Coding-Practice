import java.util.Scanner;
public class lec04{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
        int a =sc.nextInt();
        System.out.println("Enter any string:");
        String s=sc.nextLine();
        System.out.println("The entered string is :"+s);     
        System.out.println("The entered number is :"+a);
        System.out.println("Enter other number:");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("The sum of the two numbers is:"+sum);
        //for float
        System.out.println("Enter floa:t");
        float f=sc.nextFloat();
        //for character
        System.out.println("Enter character:");
        char ch=sc.next().charAt(0);
        System.out.println("The program completed");
        sc.close(); 
        System.out.println(f+ch);
    }
}