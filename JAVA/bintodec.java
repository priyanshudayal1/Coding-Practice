import java.util.Scanner;
public class bintodec{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=0;
        int p=1;
        while (n!=0){
            int unitdigit=n%10;
            a+=unitdigit;
            n=n/10;
            p=p*2;

    
        }
        System.out.println("Decimal number is"+a);
        sc.close();
    }

}