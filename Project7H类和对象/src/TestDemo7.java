/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 30
 * Time:9:29
 */
//实例代码块优先于构造函数执行
//静态代码块执行完毕后，实例代码块（构造代码块执行），再然后是构造函数执行。
//代码块
    /*字段的初始化方式：
    * （1）就地初始化
    * （2）使用构造方法初始化
    * （3）使用代码块初始化
    *
    *
    *代码块：——使用{}定义的一段代码块
    * 根据代码块定义的位置以及关键字，又可分四种：
    * （1）普通代码块——定义在方法中的代码块
    * （2）构造代码块——定义在类中的代码块（不加修饰符）——也称实例代码块——构造代码块:一般用于初始化实例成员变量。
    * （3）静态代码块——使用static定义的代码块——一般用于初始化静态成员属性。
    * （4）同步代码块*/

class Person7{
    private String name;//实例成员变量
    private  int age;
    private String sex;

    private static  int count = 0;//静态成员变量——由类共享数据——存在于方法区

    public Person7(){
        System.out.println("I am Person7 init()!");
    }

    //2.实例代码块——定义在类中的代码块（不加修饰）
    //实例代码块优先于构造函数执行
    {
        this.name = "jiijixiong";
        this.age = 20;
        this.sex = "女";
        System.out.println("I am instance init()!");
    }

    //3.静态代码块：使用static定义的代码块——一般用于初始化静态成员属性。
    static{
        count = 10;//在静态代码块中，只能访问静态数据成员。
        System.out.println("I am static init()!");
    }
    public void show(){
        System.out.println("name:" + name + " age:" + age + " sex:" + sex);
    }



}
public class TestDemo7 {
    public static void main(String[] args) {
        Person7 p1 = new Person7();
        Person7 p2 = new Person7();//此静态代码块不会被执行
        //静态代码块不管生成多少个对象，其只会执行一次，且是最先执行的；
        //静态代码块执行完毕后，实例代码块（构造代码块执行），再然后是构造函数执行。
    }

    public static void main2(String[] args) {
        Person7 person7 = new Person7();
        person7.show();
    }

        //1.普通代码块——定义在方法中的代码块
        public static void main1(String[] args) {

            {//直接使用{}定义，普通代码块
                int x = 10;
                System.out.println("x1 = " + x);
            }

            int x = 100;
            System.out.println("x2 = " + x);
        }

}
