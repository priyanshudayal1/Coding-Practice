import java.util.Scanner;
import java.util.Arrays;
public class secondlargest {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int a=sc.nextInt();
        int arr[]=new int[a];
        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }

      
        Arrays.sort(arr);
        System.out.println("The second largest element of the list is:"+arr[arr.length-2]);
        sc.close();
    }
}
