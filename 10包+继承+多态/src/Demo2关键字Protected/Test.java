package Demo2关键字Protected;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:12
 */
//2.protected关键字
/*protected 关键字
 * 如果将字段设为private，子类不能访问；如果将其设成public ，又不符合“封装”；
 * 因此，提出了protected关键字
 * （1）对于类的调用者来说，protected修饰的字段和方法是不能访问的；
 * （2）对于子类的子类和同一个包的其它类来说，protected修饰的字段和方法是可以访问的；
 *
 * Java中对于字段和方法共有四种访问权限
 * （1）private:类内部能访问，类外部不能访问；
 * (2)默认：——包访问权限：类内部能访问，同一个包中的类可以访问，其它类不能访问；
 * （3）protected:类内部能访问，子类和同一个包中的类可以访问，其它类不不能访问；
 * (4)public：类内部和类的调用者都能访问；
 *
 * final关键字：
 * final 关键字——修饰一个变量或者字段的时候，表示常量（不能修改）；
 * final 关键字——修饰类，此时表示被修饰的类就不能被继承；——final关键字的功能是  限制 类被继承
 * 如String字符串类，就是使用final修饰的，不能被继承。
 * */

//    final public class Animal{
//}


public class Test {
}
