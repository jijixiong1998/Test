/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 29
 * Time:18:33
 */

class Test1{
    public int a;
    public static int count;

    public static void change(){
        count = 100;
        //a = 100;——错误，静态方法中不可以访问非静态数据成员；
    }
}

public class TestDemo {
    //1.static关键字——修饰属性、方法、代码块、修饰类
    //（1）修饰属性——Java静态属性和类相关，和具体的实例无关。——即同一个类的不同实例共用同一个静态属性。
    public static void main111(String[] args) {
       Test1 t1 = new Test1();
        t1.a++;
        Test1.count++;
        System.out.println(t1.a);//1
        System.out.println(Test1.count);//1
        System.out.println("=============");

        Test1 t2 = new Test1();
        t2.a++;
        Test1.count++;
        System.out.println(t2.a);//1
        System.out.println(Test1.count);//2——count被static修饰，所有类共享。且不属于对象，访问方式为：类名.属性
    }

    //(2)修饰方法——如果在任何方法上使用static关键字，此方法称为静态方法
    /*
    * 静态方法属于类，而不属于类的对象；
    * 可以直接调用静态方法，而无需创建类的实例；
    * 静态方法可以访问静态成员，并可以更改静态数据成员的值。
    *
    * 注意：
    * 静态方法和实例无关，而是和类相关，——因此导致了两种情况：
    * （1）静态方法不能直接使用非静态数据成员或调用非静态方法（非静态数据成员和方法都是和实例相关的）
    *
    * （2）this和super关键字不能在静态上下文中使用（其中this是当前对象的引用，super是当前实例父类实例的引用，也是和当前实例相关）。
    *
    * main方法为static方法
    * */
    public static void main(String[] args) {
        Test1.change();;//无需创建实例对象，直接通过  类名.静态方法 进行调用
        System.out.println(Test1.count);//100
    }
}
