import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the side of the square:");
        int side=sc.nextInt();
        System.out.println("The area of the sqaure is :"+side*side+" units square");
        sc.close();
    }
}
