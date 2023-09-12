class algebra{
     int sum(int a,int b){
        int ans=a+b;
        return ans;
    }
}
public class method{
    public static void main(String[] args) {
        int x=10;
        int y=40;
        algebra A=new algebra();
        int s=A.sum(x,y);
        System.out.println(s);
    }
}
