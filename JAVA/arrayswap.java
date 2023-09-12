import java.util.Scanner;

public class arrayswap {
    static void arrswap(int arr[]){
        int n=arr.length;
        //int t=0;
        for (int i=0;i<(n/2);i++){

            int first=arr[i];
            int last= arr[n-i-1];
            arr[n-i-1]=first;
            arr[i]=last;
        }
        System.out.println("The array after swapping is :");
        for (int i:arr){
            System.out.print(i+" ");
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int a=sc.nextInt();
        int l[]=new int[a];
        System.out.println("Enter the elements of the array:");
        for (int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        arrswap(l);
        sc.close();
        System.out.println("");
        for (int j:l){
            System.out.print(j+" ");
        }
        
    }
}
