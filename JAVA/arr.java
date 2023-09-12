import java.util.Scanner;
public class arr{
    public static void main(String[] args) {
        int ar[]=new int[7];
        ar[0]=1;
        for (int i=1;i<=6;i++){
            ar[i]=i+1;
        }
        for (int j=0;j<=6;j++){
            System.out.println(ar[j]);
        }
        System.out.println(ar);
        //2d array
        int z;
        Scanner sc=new Scanner(System.in);
        int l[][]=new int[3][3];
        for (int x=0;x<3;x++)
        {
            for (z=0;z<3;z++) {
                System.out.println("Enter the element:");
                l[x][z]=sc.nextInt();
            }
        }
        for (int x=0;x<3;x++)
        {
            for (z=0;z<3;z++) {
                System.out.print(l[x][z]+"  ");
            }
            System.out.println();
        }
        

        sc.close();

    }
}