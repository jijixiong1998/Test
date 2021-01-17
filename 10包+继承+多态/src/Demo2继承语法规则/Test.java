package Demo2继承语法规则;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:15:33
 */
//继承语法规则
/*1.基本语法  class 子类 extends 父类{  }
*（1）使用extends指定父类；
* （2）java中一个子类只能继承一个父类（java是单继承的）；
* （3）子类会继承父类的所有public的字段和方法；
* （4）对于父类 的private的字段和方法，子类中是无法访问的；
* （5）子类的实例中，也包含着父类的实例，可以使用super关键字得到父类实例的引用；*/

    //此时让Cat和Bird继承自Animal类，那么Cat在定义的时候就不必再写name字段和eat方法了
    //extends 英文原意指 “扩展”，而我们所写的类的继承，也可理解为基于父类进行代码上的“扩展”
    //如我们写的Bird类，就是在Animal的基础上扩展出了fly 方法


public class Test {
    public static void main(String[] args) {
        Cat cat = new Cat("小黑猫");
        cat.eat("猫粮");
        //如果将name的修饰符改为private,那么此时子类就不能访问了；
        Bird bird = new Bird("小小鸟");
        bird.fly();
    }

}
