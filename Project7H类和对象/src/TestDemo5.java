/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 29
 * Time:20:38
 */
//构造方法
    /*构造方法是一种特殊方法——使用关键字new实例化新对象时会被自动调用，用于完成初始化操作；
    *   new执行过程：
    *   （1）为对象分配内存空间
    *   （2）调用对象的构造方法
    *   语法规则：
    *       （1）方法名称必须与类名称相同；
    *       （2）构造方法没有返回值类型声明；
    *       （3）每一个类中一定至少存在一个构造方法（没有明确定义，则系统自动生成一个无参构造）。
    *
    *   注意：
    *   （1）如果类中没有提供任何的构造函数，那么编译器会默认生成一个不带有参数的构造函数；
    *   （2）如果类中定义了构造方法，则默认的无参构造将不再生成；
    *   （3）构造方法支持重载。*/
class Person5{
    private String name;//实例成员变量
    private int age;
    private String sex;

    //默认构造函数   构造对象
    public Person5() {
        this.name = "张三";
        this.age = 10;
        this.sex = "男";
    }

    //带有3个参数的构造函数

    public Person5(String name, int age, String sex) {
        this.name = name;
        this.age = age;
        this.sex = sex;
    }

    public void show(){
        System.out.println("name:" + name + " age:" + age + " sex:" + sex);
    }
}

public class TestDemo5 {
    public static void main(String[] args) {
        Person5 person5 = new Person5();//调用不带参数的构造函数，如果程序没有提供会调用不带参数的构造函数
        person5.show();

        Person5 p2 = new Person5("lisi",80,"男");//调用带有3个参数的构造函数
        p2.show();


    }
}
