import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number :");
        int f=1;
        int n=sc.nextInt();
        int nn=n;
        while (n!=0){
            f=f*n;
            n--;
        }
        System.out.println("The factorial of "+nn+" is :"+f);
        sc.close();

    }    
}
