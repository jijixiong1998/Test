/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 30
 * Time:9:50
 */
//toString（）方法
    /*
    *toString方法会在println的时候被自动调用；
    * 将对象转成字符串这样的操作我们称为序列化；
    * toString是Object类提供的方法，我们自己创建的Person8类默认继承自Object类，可以通过重写toString方法实现我们自己版本的转换字符串方法；
    * @Override在Java中称为"注解"*/
class Person8{
    private String name;
    private int age;

    public Person8(){
        this.name = name;
        this.age = age;
    }

    public Person8(String name,int age){
        this.name = name;
        this.age = age;
    }

    public void show(){
        System.out.println("name:" + name + " age:" + age);
    }

    @Override
    public String toString() {
        return "Person8{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
public class TestDemo8 {
    //匿名对象——匿名只是表示没有名字的对象
    /*没有引用的对象称为匿名对象；
    * 匿名对象只能在创建对象时使用；
    * 如果一个对象只是使用一次，后面就不需要用了，则可以考虑使用匿名对象。*/
    public static void main(String[] args) {
        //通过匿名对象调用方法
        new Person8("haha",20).show();//name:haha age:20
    }

    //可以使用toString方法来将对象自动转成字符串。——重写toString方法。
    public static void main2(String[] args) {
        Person8 per= new Person8("lisi",20);
        per.show();//name:lisi age:20
        System.out.println(per);//Person8{name='lisi', age=20}

    }
    public static void main1(String[] args) {
        Person8 person8 = new Person8();
        person8.show();//name:null age:0
        System.out.println(person8);//打印结果为：Person8@1b6d3586——打印的是地址的哈希值——原因：调用的是Object的toString方法

    }
}
