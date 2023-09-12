import java.util.Scanner;

public class Q2 {
    static boolean isEven(int a){
        if (a%2==0){
            return true;

        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int n =sc.nextInt();
        if (isEven(n)){
            System.out.println("The number is even.");
        }
        else{
            System.out.println("The number is odd.");
        }
        sc.close();
    }    
}
