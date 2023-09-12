import java.util.Scanner;
import java.lang.System;

public class targetsum{
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
        for (int a=0;a<7;a++){
            l[a]=sc.nextInt();

        }
        System.out.println("Enter the x:");
        int x=sc.nextInt();
        tSum(x, l);
        sc.close();
    }
}