class Circle{
    Circle(float r){
        this.radius=r;
    }
    public float radius;
    public double area(){
        return Math.PI*this.radius*this.radius;
    }
    public double circumference(){
        return 2*Math.PI*this.radius;
    }



}

class Cylinder extends Circle{
    Cylinder(float r ,int h){
        super(r);
        this.height=h;


    }
    public int height;
    public double Area(){
        return Math.PI*this.radius*this.radius*this.height;
    }

}

class pracQ1{
    public static void main(String[] args) {
        Circle obj=new Circle(7);
        Cylinder obj2=new Cylinder(6,10);
        System.out.println(obj.area());
        System.out.println("The height of the cylinder is :");
        System.out.println(obj2.height);
        System.out.println(obj2.Area());

        
    }
}