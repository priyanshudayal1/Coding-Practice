public class newc {
    public static void main(String[] args) {
        employee piyush=new employee();
        piyush.id=1;
        piyush.name="Piyush Dayal";
        System.out.println("The name of the employee is : "+piyush.name+" and the id of the employee is "+piyush.id);
    }
}
class employee{
        int id ;
        String name;
    }
