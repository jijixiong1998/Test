/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 29
 * Time:18:53
 */
//分析内存布局
class Person1{
    public int age;//实例变量——存放在对象内
    public String name;//实例变量；
    public String sex;//实例变量
    public static int count;//类变量也叫静态变量，编译时已经产生，属于类本身，且只有一份。——存放在方法区。
    public final int SIZE = 10;//被final修饰的叫常量，也属于对象。被final修饰，后续不可修改。
    public static final int COUNT = 99;//静态的常量，属于类本身，且只有一份，被final修饰，后续不可修改。

    //实例成员函数
    public void eat(){
        int a = 10;//局部变量
        System.out.println("eat()方法");
    }

    //实例成员函数
    public void sleep(){
        System.out.println("sleep()方法");
    }

    //静态成员函数
    public static void staicTest(){
       // sex = "man";error——静态方法中不能访问非静态成员
        System.out.println("staticTest()方法");
    }
}


public class Testdemo1 {
    public static void main(String[] args) {
        //产生对象   实例化对象
        Person1 person1 = new Person1();//person1为对象的引用
        System.out.println(person1.age);//默认值为0
        System.out.println(person1.name);//默认值为null
        //System.out.println(person1.count);//此访问静态数据成员的方式合理但不合法——会有警告
        //正确的访问方式
        System.out.println(Person1.count);
        System.out.println(Person1.COUNT);
        Person1.staicTest();
        //总结：所有被static所修饰的方法或者属性，全部不依赖于对象。

        person1.eat();
        person1.sleep();
    }
}
