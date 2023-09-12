import java.util.Scanner;
public class div35 {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a number:");
    int n=sc.nextInt();
    sc.close();
    if (n%3==0 || n%5==0){
        System.out.println("The number is divisible by 3 or 5 :"+n);
    }
    else{
        System.out.println("The number is not divisible by 3 or 5");
    }
    }
}
