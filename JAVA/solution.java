import java.util.Scanner;
public class solution{

        public static void main(String[] args) {
            double d;
            String s;
            Scanner scan = new Scanner(System.in);
            int i = scan.nextInt();
            d=scan.nextDouble();
            s=scan.nextLine();
    
            // Write your code here.
    
            System.out.println("String: " + s);
            System.out.println("Double: " + d);
            System.out.println("Int: " + i);
            scan.close();
        }
    }
