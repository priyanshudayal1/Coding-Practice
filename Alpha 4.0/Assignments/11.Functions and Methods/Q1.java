import java.util.Scanner;

public class Q1 {
    static int Avg(int a,int b,int c){
        return (a+b+c)/3;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter three numbers:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        int avg=Avg(a, b, c);
        System.out.println("The average if the givern numbers is: "+avg);
        sc.close();

    }
}
