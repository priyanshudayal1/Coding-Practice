public class arrsum {
    public static void main(String[] args) {
        int arr[]={1,5,3};
        int s=0;
        for (int a: arr){
            s=s+a;
        }
        int l=arr[0];
        System.out.println(s);
        for (int i :arr){
            if (i>=l){
                l=i;
            }
        }
        System.out.print("The largest number is :"+l);
    }
}
