package demo1;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:19:21
 */
//接口
    /*接口是抽象类的更进一步；
    * 抽象类中还可以包含非抽象方法和字段；
    * 而接口中包含的方法都是抽象方法，字段只能是静态常量；
    * 在前面的父类Shape中并没有包含其它非抽象方法，可将其舍成一个接口；
    *
    *（1） 使用interface定义一个接口；
    * （2）接口中的方法一定是public 修饰的抽象方法，因此可是省略掉 public abstract；
    * （3）关键字使用implements；
    * （4）在调用的时候同样可以创建一个接口的引用，对应到一个子类的实例；
    * （5）接口不能单独被实例化；*/
public interface IShape {//接口中只能包含抽象方法，对于字段来说，只能包含静态常量（final static）
    void draw();
    int val = 66;
}

