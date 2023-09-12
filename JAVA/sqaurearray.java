import java.util.Scanner;

public class sqaurearray {
    static int[] arrsq(int arr[]){
        int ans[]=new int[arr.length];
        int left=0;
        int right=arr.length-1;
        int k=0;
        while (left<=right){
            if (Math.abs(arr[left]) > Math.abs(arr[right]))
            {
                ans[k++]=arr[left]*arr[left];
                left++;
            }
            else if (Math.abs(arr[right])>Math.abs(arr[left])){
                ans[k++]=arr[right]*arr[right];
                right--;
            }
        }
        for (int i=0;i<ans.length;i++){
            int temp=ans[i];
            ans[i]=ans[ans.length-i-1];
            ans[ans.length-1-i]=temp;

        }
        return ans;

    }   
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter the size of the array:");
        n=sc.nextInt();
        int l[]=new int[n];        
        System.out.println("Enter "+n+" elements:");
        for (int i=0;i<n;i++){
            l[i]=sc.nextInt();
        }
        System.out.println("The Orginal array is:");
        for(int i:l){
            System.out.print(i+" ");
        }
        int sorted[]=arrsq(l);
        System.out.println("The sorted array is:");
        for(int i:sorted){
            System.out.print(i+" ");
        }
        sc.close();
    } 
}
