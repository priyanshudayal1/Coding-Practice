import java.util.Scanner;

public class arrQues{
    static int lastOccurence(int arr[],int x){
        int f=-100;
        for (int i=0;i<arr.length;i++){
            if (arr[i]==x){
                f=i;
            }

        }
        if (f==-100){
            System.out.println("Not found.");
        }
        return f;
    }
    static int greaterX(int arr[],int x){
        int c=0;
        for (int i:arr){
            if (i>x){
                c++;
            }
        }
        return c;
    }
    static boolean sortedArr(int arr[]){
        boolean flag= true;
        for (int i=1;i<arr.length;i++){
            if (arr[i]<arr[i-1]){
                flag=false;
                break;
            }

        }
        return flag;
    }
    public static void main(String[] args) {
        int l[]={1,2,3,4,5,2,10,2,3,7};
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to be searched:");
        int a=sc.nextInt();
        int b=lastOccurence(l, a); 
        if (b!=-100){
            System.out.println("The element last occured at -> "+b+" index.");
        }
        System.out.println("Enter the number greater than to be searched:");
        int c=sc.nextInt();
        int d=greaterX(l, c);
        System.out.println("The count of number greater than "+c+" is :"+d);
        
        sc.close();
        int arr1[]={1,2,3,4,5,6};
        int arr2[]={1,20,3,6,7,510,10,20};
        System.out.println(sortedArr(arr1));
        System.out.println(sortedArr(arr2));

        
    }
}