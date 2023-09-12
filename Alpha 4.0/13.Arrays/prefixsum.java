public class prefixsum {
    static void prefixSum(int arr[]){
        int n=arr.length;
        int prefixArr[]=new int[n];
        int maxsum=Integer.MIN_VALUE;
        int cSum=0;
        prefixArr[0]=arr[0];
        for(int i=1;i<n;i++){
            prefixArr[i]=prefixArr[i-1]+arr[i];
        }
        for (int i=0;i<n;i++){
            int start=i;
            for (int j=i;j<n;j++){
                int end =j;
                cSum=start==0? prefixArr[end]:prefixArr[end]-prefixArr[start -1];
                if (maxsum<cSum){
                    maxsum=cSum;
                }

            }
        }
        System.out.println("The maximum sum of the aray is: "+maxsum);
    }
    public static void main(String[] args) {
        int arr[]={1,-2,6,-1,3};
        prefixSum(arr);
    }
}
