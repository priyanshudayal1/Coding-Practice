import java.util.Scanner;

public class oddevenarr {
    static void swap(int arr[],int i,int j ){
        int temp=arr[i];
        arr[i]=arr[j];arr[j]=temp;


    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int l[]=new int[n];
        for (int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        int a=l.length;
        int left=0;
        int right=a-1;
        while (left<right){
            if (l[left]%2==0){
                left++;
            }
            else if (l[right]%2!=0){
                right--;
            }
            else if (l[left]%2!=0 && l[right]%2==0){
                swap(l,left, right);
            }
        }
        System.out.println("The sorted list is :");
        for (int i:l){
            System.out.print(i+",");
        }
        sc.close();
    }
}
