import java.util.Scanner;

public class CQ1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=sc.nextInt();
        if (n>0){
            System.out.println("The number is positive.");
        }
        else if(n==0){
            System.out.println("The number is zero.");
        }
        else{
            System.out.println("The number is negative.");
        }
        sc.close();
    }
}