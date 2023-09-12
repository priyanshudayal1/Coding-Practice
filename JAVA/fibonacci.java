import java.util.Scanner;
public class fibonacci{
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the number of fibonacci terms you want:");
        int n=sc.nextInt();
        sc.close();
        int i=0;
        int a=0;
        int b=1;
        int c;
        System.out.println(a);
        System.out.println(b);
        for (i=3;i<=n;i++){
            c=a+b;
            System.out.println(" "+c);
            a=b;
            b=c;
        }
        

    }
}