import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        float eraser,pencil,pen;
        System.out.println("Enter the price of Pen:");
        pen=sc.nextFloat();
        System.out.println("Enter the price of Pencil:");
        pencil=sc.nextFloat();
        System.out.println("Enter the price of Eraser:");
        eraser=sc.nextFloat();
        System.out.println("The total cost of the items is:"+(pen+pencil+eraser));
        double total=((pen+pencil+eraser)*0.18)+(pen+pencil+eraser);
        System.out.println("The cost of the items with GST is :"+total);
        sc.close();
    }
    
}
