import java.util.Scanner;
public class sumn {
    public static void main(String[] args) {
        int i=1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the n:");
        int n=sc.nextInt();
        int sum=0;
        while (i<=n){
            sum=sum+i;
            i++;
        }
        System.out.println("The sum of first n natural number is : "+sum);
        //for loop
        int s=0;
        int j=0;
        sc.close();
        for (j=0;j<=n;j++){
            s=s+j;
        }
        System.out.println("The sum by for loop is :"+ s);
        //do while loop
        int ss=0;
        int k=1;
        do{
            ss=ss+k;
            k++;
        }
        while (k<=n);
        System.out.println("by do while sum is :"+    ss);
        
    }
}
