/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 30
 * Time:9:10
 */
//this关键字
    //this表示当前对象的引用。——可以借助this来访问对象的方法和字段。
    //可发现在构造函数内部，我们可以使用this关键字，构造函数是用来构造对象的，对象还没有构造好，我们就使用了this，那么this怎么会代表当前对象呢？
    //因此，this代表的是当前对象的引用。
class Person6{
    private String name;//实例成员变量
    private int age;
    private String sex;

    //默认构造函数    构造对象
    public Person6(){
        //this调用构造函数
        this("zhangsan",22,"man");//必须放在第一行进行显示
    }
    //这两个构造函数之间的关系为重载。
    public Person6(String name,int age,String sex){
        this.name = name;//this 代表当前对象的引用
        this.age = age;
        this.sex = sex;
    }

    public void show(){
        System.out.println("name:" + name + " age:" + age + " sex:" + sex);
    }
}
public class TestDemo6 {
    public static void main(String[] args) {
        Person6 person6 = new Person6();//调用不带参数的构造函数
        person6.show();

    }
}
