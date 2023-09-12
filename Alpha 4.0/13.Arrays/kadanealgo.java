//import java.util.Math;
public class kadanealgo {
    static void maxsasum(int arr[]){
        int n=arr.length;
        int csum=0;
        int maxsum=Integer.MIN_VALUE;
        for (int i=0;i<n;i++){
            csum=csum+arr[i];
            if (csum<0){
                csum=0;
            }
            maxsum=Math.max(maxsum, csum);
            
        }
        System.out.println("The maximum sum of the subarrays is : "+maxsum);
    }
    public static void main(String[] args) {
        int arr[]={-2,-3,4,-1,-2,1,5,-3};
        maxsasum(arr);
    }
}
