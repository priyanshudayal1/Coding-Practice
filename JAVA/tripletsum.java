import java.util.Scanner;
public class tripletsum {
    static int sum(int x,int arr[]){
        int c=0;
        int n=arr.length;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                for (int k=j+1;k<n;k++)
                {
                    if (arr[i]+arr[j]+arr[k]==x)
                    {
                        c=c+1;
                    }
                }
            }
        }
        return c;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int a=sc.nextInt();
        int l[]=new int[a];
        System.out.println("Enter the elements of the array:");
        for(int i=0;i<l.length;i++){
            l[i]=sc.nextInt();
        }
        System.out.println("Enter the value of x:");
        int x=sc.nextInt();
        int ans=sum(x, l);
        System.out.println("The number of triplets whose sum is "+x+" is :"+ans);
        sc.close();
    }
}
