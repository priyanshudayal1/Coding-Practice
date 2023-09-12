import java.util.Scanner;

public class targetsum {
    public static void main(String[] args) {
        int arr[]={2,4,8,6,10};
        int target;
        int count=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the target for the sum:");
        target=sc.nextInt();  
        for(int i=0;i<arr.length;i++){
            for (int j=i+1;j<arr.length;j++){
                if (arr[i]+arr[j]==target){
                    count++;
                }
            }
        }
        System.out.println("The number of the possible pairs of the target sum is : "+count);
        sc.close();
    }
}
