import java.util.Scanner;

public class Q2{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number of inputs you want:");
        int n=sc.nextInt();
        int odd=0;
        int even=0;
        System.out.println("Enter the numbers:");
        for (int i=0;i<n;i++){
            int a=sc.nextInt();
            if (a%2==0){
                even=even+a;

            }
            else{
                odd=odd+a;
            }
        }
        System.out.println("The sum of the even numbers is "+even);
        System.out.println("The sum of the odd numbers is "+odd);
        sc.close();
    }
}