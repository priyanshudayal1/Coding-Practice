abstract class Base2{
    public Base2(){
        System.out.println("Mai ek constructor hoon!!");
    }
    public void sayhello(){
        System.out.println("Hello");
    }

    abstract public void greet();

}


class child2 extends Base2{
    @Override
    public void greet(){
        System.out.println("Good Evening");
    }
}

public class abstracteg{
    public static void main(String[] args) {
        child2 ch=new child2();
        ch.greet();
        
    }
}