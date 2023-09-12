import java.util.Scanner;

public class zeronesort2 {
    static void swap(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int l[]=new int[n];
        int a=l.length;
        for (int i=0;i<l.length;i++){
            System.out.println("Enter the element of the array:");
            l[i]=sc.nextInt();
        }
        int left=0;
        int right=a-1;
        while (right>left){
            if (l[left]==1 && l[right]==0 ){
                swap(l, left, right);
            }
            else if(l[left]==0){
                left++;
            }
            else if(l[right]==1){
                right--;
            }
        }
        System.out.println("The sorted array is :");
        for (int i:l){
            System.out.print(i+"");
        }
        sc.close();
    }
}
