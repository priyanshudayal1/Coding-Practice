import java.util.Scanner;
public class rectstar{
    public static void main(String[] args) {
        int i;
        int j;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter R and C:");
        int r =sc.nextInt();
        int c=sc.nextInt();
        for (i=1;i<=r;i++){
            for (j=1;j<=c;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}