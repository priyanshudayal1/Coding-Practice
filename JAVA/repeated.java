import java.util.Scanner;

public class repeated {
    static int rep(int arr[]){
        //int repeat=-1;
        int n =arr.length;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (arr[i]==arr[j]){
                    return arr[i];
                }
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int a=sc.nextInt();
        int l[]=new int[a];
        System.out.println("Enter the items of the array:");
        for(int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        System.out.println("The first repeating vaule is :"+rep(l));
        sc.close();
        
    }
}
