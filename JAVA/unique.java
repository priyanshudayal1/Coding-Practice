import java.util.Scanner;

public class unique {
    static int uniq(int arr[]){
        int unique=arr[0];
        int n=arr.length;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (arr[i]==arr[j]){
                    arr[i]=-1;
                    arr[j]=-1;

                }
            }
        }
        for (int j:arr){
            if (j>0){
                unique=j;
            }
        }
        return unique;
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int a=sc.nextInt();
        int l[]=new int[a];
        System.out.println("Enter the array's elements:");
        for (int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        int u=uniq(l);
        System.out.println("The unique element in the list is:"+u);
        sc.close();
    }
}
