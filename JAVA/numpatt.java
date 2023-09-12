import java.util.Scanner;

public class numpatt {
        public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int i;
        int j;
        for (i=1;i<=r;i++){
            for (j=1;j<=c;j++){
                System.out.print(j);
            }
            System.out.println(i);
        }
        //sc.close;
}
}
