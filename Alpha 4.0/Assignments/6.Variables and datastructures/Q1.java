import java.util.Scanner;
public class Q1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the values of a , b,c:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        System.out.println("The average of the given three numbers is: "+(a+b+c)/3);
        sc.close();
    }
}