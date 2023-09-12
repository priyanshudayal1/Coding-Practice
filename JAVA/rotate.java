import java.util.Scanner;

public class rotate {
    public static void main(String[] args) {
        int k;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int a=sc.nextInt();

        int arr[]=new int[a];
        System.out.println("Enter the elements of the array:");
        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("The array before the rotation is :");
        System.out.print("[");
        for (int i :arr){
            System.out.print(i+",");
        }
        System.out.print("]");
        System.out.println();
        System.out.println("Enter the value of k:");
        k=sc.nextInt();
       
        int n=arr.length;
        k=k%n;
        for (int j=0;j<k;j++){
            int first=arr[j];
            int last=arr[n-j-1];
            arr[j]=last;
            arr[n-j-1]=first;
        }
        System.out.println("The array after the rotation is :");
        System.out.print("[");
        for (int i :arr){
            System.out.print(i+",");
        }
        System.out.print("]");
        sc.close();
    }

    
}
