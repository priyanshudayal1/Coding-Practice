

import java.util.Scanner;
public class age {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your age:");
        int a=sc.nextInt();
        if (a<12){
            System.out.println("CHILD");

        }
        else if(a>12 && a<18){
            System.out.println("TEENAGER");
        }
        else{
            System.out.println("ADULT");

        }
        sc.close();
    }
}
