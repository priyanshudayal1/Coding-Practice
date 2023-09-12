import java.util.Scanner;
public class arroccur{
    public static void main(String[] args) {
        int l[]=new int[10];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 10 numbers for the array:");
        for (int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        int x;
        int c=0;
        System.out.println("Enter the number to be searched:");
        x=sc.nextInt();
        for (int j:l){

            if (x==j){
                c++;
            }
        }
        System.out.println("The occurence of x is :"+c+" times.");
        sc.close();
    }
}