import java.util.Scanner;
public class Reverse {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the items of the array:");
        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int l=arr.length;
        for (int i=0;i<l/2;i++){
            int first=arr[i];
            int last=arr[l-1-i];
            int temp=last;
            arr[l-i-1]=first;
            arr[i]=temp;

        }
        for (int i:arr){
            System.out.print(i+ " ");
        }
        sc.close();
    }    
}
