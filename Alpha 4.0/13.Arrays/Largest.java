import java.util.Scanner;

public class Largest {
    static int searchLarge(int arr[]){
        int large=0;
        for (int i=0;i<arr.length;i++){
            if(arr[i]>arr[large]){
                large=i;
            }
        }
        return large;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the items of the array:");
        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        int large=searchLarge(arr);
        System.out.println("The largest number in the array is: " +arr[large]+ " at index :"+large);
        sc.close();
    }
}
