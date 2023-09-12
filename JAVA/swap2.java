public class swap2 {
    static void sw(int a,int b){
        System.out.println("The values before swap is a= "+a+" b= "+b);
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("The values after swap is a= "+a+" b= "+b);
    }
    public static void main(String[] args) {
        int a=10;
        int b=15;
        sw(a, b);
    }
}
