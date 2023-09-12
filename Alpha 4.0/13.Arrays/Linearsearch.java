import java.util.Scanner;

public class Linearsearch {
    static void linearSearch(int arr[],int x){
        int index=0;
        for (int i=0;i<arr.length;i++){
            if(arr[i]==x){
                index=i;
                System.out.println("The item found at index:"+index);
                break;

            }
            else{
                index=-1;
            }
        
        }
        if (index!=-1){
            
        }
        else{
                System.out.println("Item not found.");
            }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the item to be searched:");
        int item=sc.nextInt();
        linearSearch(arr, item);
        sc.close();
    }
}
