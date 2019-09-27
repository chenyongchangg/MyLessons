//二话不说先抽象
//图形祖宗
abstract class Shape{
	double height;
	double width;
	
}
abstract class TwoDemsionShape extends Shape{
	double getArea() {
		return 0;
	}
	
}
abstract class ThreeDemsionShape extends Shape{
	double a,b,c,r;
	abstract double getArea();
	abstract double getVolum();
	
}
//第一个实现的类 ○
class Circle extends TwoDemsionShape{
	double r;
	double a;
	double b;
	public Circle(double r) {
		// TODO Auto-generated constructor stub
		this.r = r;
		
	}
	@Override
	double getArea() {
		// TODO Auto-generated method stub
		return Math.PI*r*r;
	}
	double getR() {
		// TODO Auto-generated method stub
		return r;
	}
	
}

class Trangle extends TwoDemsionShape{
	double a,b,c;
	double getArea(double d,double e,double f) {
		// TODO Auto-generated method stub
		a=d;
		b=e;
		c=f;
		double p = (a+b+c)/2;
		double s = Math.sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
}
class Rectangle extends TwoDemsionShape{
	double a;
	double b;
	public Rectangle(double c,double d) {
		// TODO Auto-generated constructor stub
		a=c;
		b=d;
		
	}
	@Override
	double getArea() {
		// TODO Auto-generated method stub
		return a*b;
	}
}
class Cube extends ThreeDemsionShape{
	double c;
	public Cube(double d,double e,double f) {
		// TODO Auto-generated constructor stub
		a=d;
		b=e;
		c=f;
		
	}
	@Override
	double getVolum() {
		// TODO Auto-generated method stub
		return a*b*c;
	}
	@Override
	double getArea() {
		// TODO Auto-generated method stub
		return (a*b+a*c+b*c)*2;
	}
}
class Sphere extends ThreeDemsionShape{
	
	public Sphere(double e) {
		// TODO Auto-generated constructor stub
		r=e;
	}
	@Override
	double getVolum() {
		// TODO Auto-generated method stub
		return r*r*r*Math.PI*4/3;
	}
	@Override
	double getArea() {
		// TODO Auto-generated method stub
		return r*r*Math.PI*4;
	}
}
class Tetrahedron extends ThreeDemsionShape{
	double d,e,f ;
	public Tetrahedron(double A,double B,double C,double D
			,double E,double F) {
		// TODO Auto-generated constructor stub
		a =A;
		b=B;
		c=C;
		d=D;
		e=E;
		f=F;
	
		
		
	}
	@Override
	double getVolum() {
		double D = b*b+c*c-d*d;
		double E=a*a+c*c-e*e;
		double F=a*a+b*b-f*f;
		return Math.sqrt(4*a*a*b*b*c*c-a*a*D*D-b*b*E*E-c*c*F*F
				+D*E*F);
		// TODO Auto-generated method stub
		
	}
	

	@Override
	double getArea() {
		Trangle trangle = new Trangle();
		return trangle.getArea(a,b,c)+
				trangle.getArea(a,f,d)+
				trangle.getArea(d,e,c)+
				trangle.getArea(e,b,f);
		// TODO Auto-generated method stub
		
	}
	
}
public class ShapePlus{
	public static void main(String[] args) {
		//四面体测试类
		Tetrahedron tetrahedron  = new Tetrahedron(1, 1, 1, 1, 1, 1);
		System.out.println(tetrahedron.getArea());;
		System.out.println(tetrahedron.getVolum());;
	}
}