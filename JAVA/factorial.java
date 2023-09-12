import java.util.Scanner;
public class factorial {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number:");
    int n=sc.nextInt();
    sc.close();
    int f=1;
    int i;
    for (i=n;i>=1;i--){
        f=f*i;
    } 
    System.out.println("The factorial of the given number is : "+f);
    }
}
