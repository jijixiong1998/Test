package Demo2;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:25
 */
//抽象类
/*在上次代码中，我们发现父类Shape中的draw方法好像并没有什么作用；
* 主要的绘制图像都是由Shape的各种子类的draw方法来完成的；
* 对这种没有实际工作的方法，，我们可以将其设计成一个抽象方法；
* 包含抽象方法的类称为抽象类；
* （1）抽象类不能直接实例化；
* （2）抽象方法不能是private修饰的；
* （3）抽象类中可以包含其它的非抽象方法，也可以包含字段；这个非抽象方法和普通方法的规则都是一样的，可以被重写，也可以被子类直接调用；
* 抽象类存在的最大意义就是为了被继承
* 抽象类本身不能被实例化，要想使用，只能创建该抽象类的子类，然后让子类重写抽象类中的抽象方法；*/

public abstract class Shape {
    //在draw前面加上abstract关键字表示这是一个抽象方法
    //同时，抽象方法没有方法体（没有{}，不能执行具体代码）
    //对于包含抽象方法的类，必须加上关键字abstract表示这是一个抽象类；
    abstract  public  void draw();
    void func(){
        System.out.println("func()");
    }
}
