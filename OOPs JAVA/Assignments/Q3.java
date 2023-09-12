package Assignments;
import java.util.Scanner;

class Square{
    public void calculate(int side){
        float perimeter;
        float area;
        area=side *side;
        perimeter=4*side;
        System.out.println("The area of the square is :"+area);
        System.out.println("The perimeter of the square is :"+perimeter);
    }
}
public class Q3 {
    public static void main(String[] args) {
        int s;
        Scanner sc=new Scanner(System.in);
        Square sq=new Square();
        System.out.println("Enter the side of the square:");
        s=sc.nextInt();                                                                                                                                             
        sq.calculate(s);
        sc.close();
        
    }
}
