class One{
    public void name(){
        System.out.println("My name is java.");
    }
    public void greet(){
        System.out.println("Good Morning ");
    }
}

class Two extends One{
    public void name(){

        System.out.println("My name is java in class Two");

    }
    public void swaagat(){
        System.out.println("Aapka Swaagat hai");
    }
}


public class dynamicmethoddespatch {
    public static void main(String[] args) {
        One obj=new One();
        Two obj2=new Two();
        obj.name();
        obj2.name();
        One obj3=new Two();
        obj3.name();

        
    }
}
