import java.util.Scanner;
public class odd {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number:\t");
    int a =sc.nextInt();
    if (a%2==0)
    {
        System.out.println("Even number");
    }
    else{
        System.out.println("The number is Odd");
    }
    sc.close();
    }
}
