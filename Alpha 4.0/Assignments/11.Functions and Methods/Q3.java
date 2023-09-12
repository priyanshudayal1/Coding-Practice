import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number to check:");
        int n,nn;
        n=sc.nextInt();
        nn=n;
        int rev=0;
        while (n!=0){
            int ld=n%10;
            rev=rev*10+ld;
            n=n/10;
        }
        if (rev==nn){
            System.out.println("The number is a pallindorme.");

        }
        else{
            System.out.println("The number is not a pallindrome.");
        }
        sc.close();
    }    
}
