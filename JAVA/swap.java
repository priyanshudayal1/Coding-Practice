public class swap {
    static void swapab(int a,int b){
        System.out.println("The values of a and b before swap is :a= "+a+" b= "+b);
        int t=a;
        a=b;
        b=t;
        System.out.println("The value of a and b after swap is : a= "+a+" b="+b);
    }
    public static void main(String[] args) {
        int a=10,b=20;
        swapab(a,b);
        swapab(60, 90);
    }
}
