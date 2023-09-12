import java.util.Scanner;
public class nnos {
    public static void main(String[] args) {
        System.out.println("Enter how many numbers you want:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i =1;
        while (i<n){
            System.out.println(i);
            i++;
        }
        sc.close();
    }
}
