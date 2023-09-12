
class Employee{
    int Salary;
    int getSalary(){
        return Salary;
    }
    String name;
    public String getName(){
        return name;
    }
    public String setName(String newname){
        return newname;
    }
}
public class Q1 {
    
    public static void main(String[] args) {
        Employee E1=new Employee();
        E1.Salary=100000;
        E1.name="piyush";
        System.out.println(E1.getSalary());
        System.out.println(E1.getName());
        System.out.println(E1.setName("Piyush Dayal"));
        System.out.println(E1.getName());
    }
}
