import java.util.Scanner;
public class SI {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the principle:");
        float p=sc.nextFloat();
        System.out.println("Enter the rate:");
        float r=sc.nextFloat();
        System.out.println("Enter the time:");
        float t=sc.nextFloat();
        System.out.println("Principle:"+p);
        System.out.println("Rate:"+r);
        System.out.println("Time:"+t);
        float si=(p*r*t)/100;
        System.out.println("The simple interest is :"+si);
        sc.close();
    }
}
