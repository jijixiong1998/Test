/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 29
 * Time:19:44
 */

//封装
    /*
    * 封装的本质：让类的调用者不必太多的了解类的实现者是如何实现类的，只要知道如何使用类即可；
    *       好处：降低了类使用者的学习和使用成本，从而降低了复杂程度。*/

class Person2{
    //直接使用public
    //这样的代码导致类的使用者（main方法的代码）必须要了解Person2类内部的实现，才能够使用这个类。——学习成本较高。
    //一旦类的实现着修改了代码（如将name改为myName）,那么类的使用者就需要大规模修改自己的代码——维护成本较高。
    public String name = "zhangsan";
    public int age = 18;
}
    //1.private 实现封装
    /*
    * private 和 public 这两个关键字表示 “访问权限控制”
    *   被public修饰的成员变量或者成员方法，可以直接被类的调用者使用；
    *   被private修饰的成员变量或者成员方法，不能被类的调用者使用。
    *
    * 即类的使用者根本不需要知道，也不需要关注一个类都有哪些private的成员。从而让类调用者以更低的成本使用类。 */


class Person3{
    /*此时的字段已经使用private来修饰，类的调用者（main方法中）不嫩直接使用。而需要借助show方法。——此时类的使用者就不必了解Person3类的实现细节
    * 同时如果类的实现者修改了字段的名字，类的调用者不需要做出任何修改（类的调用者根本访问不到name、age这样的字段）。
    *
    * private不仅可以修饰字段，也可以修饰方法；
    * 通常情况下，会将字段设为private属性；*/
    private String name = "张三";
    private int age = 20;
    public void show(){
        System.out.println("名字" + name + " 年龄" + age);
    }
}

class Person4{
    private String name;//实例成员变量
    private int age;
    /*getName即为gett方法——表示获取这个成员的值；
      setNam即为setter方法——表示设置这个成员的值；
      当set方法的形参名字和类中的成员属性的名字相同时，如果不使用this，相当于自赋值。this表示当前实例的引用；
      不是所有的字段都一定要提供setter/getter方法，而是要根据实际情况决定提供哪种方法；
     */
    public void setName(String name){
        this.name = name;//this引用，表示调用该方法的对象
    }

    public String getName(){
        return name;
    }

    public void show(){
        System.out.println("name" + name + "age" + age);
    }
}
public class TestDemo4 {

    public static void main(String[] args) {
        Person4 person4 = new Person4();
        person4.setName("张三");
        String name = person4.getName();
        System.out.println(name);//张三
        person4.show();//name张三age0
    }

    //setter方法和getter方法
    public static void main3(String[] args) {
        Person3 person3 = new Person3();
        //此时如果需要获取或者修改这个private属性，就需要使用setter和getter方法。
        //person3.age = 20;// age 在 Person3 中是 private 访问控制
        person3.show();
    }
    public static void main2(String[] args) {
        Person3 person3 = new Person3();
        person3.show();//名字张三 年龄20
    }


        public static void main1(String[] args) {
            Person2 person2 = new Person2();
            System.out.println("名字" + person2.name  + "年龄" + person2.age);
        }
}
