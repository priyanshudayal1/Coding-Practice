public class printsubarray{
    static void printsa(int arr[]){
        int ts=0;
        for (int i=0;i<arr.length;i++){
            int start =i;
            for (int j=i;j<arr.length;j++){
                int end =j;
                for (int k=start;k<=end;k++){
                    System.out.print(arr[k]);
                    System.out.print(" ");
                    
                }
                ts++;
                System.out.println();
            }
            System.out.println();
        }
        System.out.println("The total number of subarray is: "+ts );
    }
    public static void main(String[] args) {
        int arr[]={2,4,6,8,10};
        printsa(arr);
    }
}