public class zeroonesort {
    static int count(int arr[]){
        int count=0;
        for (int i=0;i<arr.length;i++){
            if (arr[i]==0){
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        int arr[]={1,0,0,1,0,1,1,0,0};
        int n=arr.length;
        int zcount=count(arr);
        for (int i=0;i<n;i++){
            if (i<zcount){
                arr[i]=0;
            }
            else if (i>=zcount){
                arr[i]=1;
            }
        }
        System.out.println("the sorted array is :");
        for (int a :arr){
            System.out.print(a+" ");
        }
        
    }
}

