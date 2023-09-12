import java.util.Scanner;

public class pairsum {
    static int tSum(int x,int arr[]){
        int c=0;
        for (int i=0;i<arr.length;i++){
            for (int j=i+1;j<arr.length;j++){
                if (arr[i]+arr[j]==x){
                    c++;
                }
                else if(arr[i]+arr[i]==x){
                    c++;
                }
            }
        }
        return c;
    }
    public static void main(String[] args) {
        int l[]= new int[7];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter elements of the array:");
        for (int a=0;a<6;a++){
            l[a]=sc.nextInt();

        }
        System.out.println("Enter the x:");
        int x=sc.nextInt();
        int ans=tSum(x, l);
        System.out.println("The answer is :"+ans);
        sc.close();
        
    }
}
