import java.util.Scanner;

public class atopowerb {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a:");
        int a=sc.nextInt();
        System.out.println("Enter b:");
        int b=sc.nextInt();
        sc.close();

        int i;
        for (i=1;i<b;i++){
            a=a*a;
        }
        System.out.println("a^b : "+a);
    }
}
