public class maxsubarraysum {
    static int maxsasum(int arr[]){
        int n =arr.length;
        int csum=0;
        int maxsum=Integer.MIN_VALUE;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                csum=0;
                for (int k=i;k<=j;k++){
                    
                    csum=csum+arr[k];
                }
                System.out.println("The current sum is:"+csum);
                if (csum>maxsum){
                    maxsum=csum;
                }
            }
        }
        return maxsum;
    }
    public static void main(String[] args) {
        int arr[]={1,-2,6,-1,3};        
        int result=maxsasum(arr);
        System.out.println("The maximum sum of the subarrays is :"+result);
    }
}
