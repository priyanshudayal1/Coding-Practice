package Assignments;


class Employee{
    private int salary;
    public Employee(){
        salary=100000;

    }
    public int getSalary(){
        return salary;
    }
}
public class Q4 {
    public static void main(String[] args) {
        Employee E1=new Employee();
        System.out.println(E1.getSalary());
        
    }
}
