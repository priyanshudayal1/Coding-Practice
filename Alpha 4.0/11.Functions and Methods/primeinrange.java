import java.util.*;

public class primeinrange {
    static boolean isPrime(int a){
        boolean check=true;
        if (a==2){
            System.out.print(2+" ");
        }
        else{
            for (int i=2;i<Math.sqrt(a);i++){
            if (a%i==0){
                check=false;
            }
        }
        }
        return check;
        

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the last number of the range:");
        int n=sc.nextInt();
        for (int i=2;i<=n;i++){
            boolean data=isPrime(i);
            if(data==true){
                System.out.print(i+" ");
            }
        }
        sc.close();
    }    
}
