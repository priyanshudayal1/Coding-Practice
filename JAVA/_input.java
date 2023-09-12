import java.util.Scanner;

public class _input{
    public static void main(String[] args) {
        int a;
        System.out.println("Enter a number :");
        Scanner sc =new Scanner(System.in);
        a=sc.nextInt();
        System.out.println("The value of a is: "+a);
        sc.close();

    }
}