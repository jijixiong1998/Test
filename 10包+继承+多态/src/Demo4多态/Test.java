package Demo4多态;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:32
 */
//多态
/*    //1.向上转型的发生的时机：
* （1）直接赋值；
* （2）方法传参；
* （3）方法返回*/

    /*2.动态绑定
    * 当子类和父类中出现同名方法的时候，再去调用会出现什么情况；
    * 此时可发现：
    * （1）animal1 和animal2 虽然都是Animal类型的引用，但是animal1 指向Animal类型的实例，而animal2 指向Bird类型的实例；
    * （2）针对animal1 和animal2 分别调用eat()方法，
    * 发现animal1.eat()实际上调用了父类的方法；而animal2.eat()方法实际调用了子类的方法；
    *
    * 因此，在Java中，调用某个类的方法，究竟执行了哪段代码（是父类方法的代码还是子类方法的代码），要看究竟这个引用指向的是父类还是子类对象。
    * 这个过程是程序运行时决定的（而不是编译时期），因此称为——动态绑定。
    * */

    /*3.方法重写——覆写——覆盖——Override
    * 子类实现父类的同名方法；
    * 并且参数的类型和个数完全相同——这种情况称为方法的重写；
    *
    * 关于重写的注意：
    * （1）普通方法可以重写；static修饰的方法不可以重写；
    * （2）重写中子类的方法的访问权限不能低于父类的方法访问权限；
    * （3）重写的方法的返回值类型不一定父类的方法相同；*/
public class Test {
    public static void main(String[] args) {
        Animal animal1  = new Animal("哈哈");
        animal1.eat("谷子");
        //我是一只小动物。。。。
        //哈哈正在吃。。。。谷子
        Animal animal2 = new Bird("小鸟鸟");
        //我是一只小小鸟。。。。
        //小鸟鸟正在吃谷子
        animal2.eat("谷子");
    }

    //(3)方法返回
    public static void main3(String[] args) {
        Animal animal = findMyAnimal();
        animal.eat("好吃的");
    }
    //此时方法findMyAnimal返回的是一个Animal类型的引用，但实际上对应到Bird的实例
    public static  Animal findMyAnimal(){
        Bird bird = new Bird("小小鸟");
        return bird;
    }


    //（2）方法传参
    public static void main2(String[] args) {
        Bird bird = new Bird("小小鸟");
        feed(bird);
    }
    //此时形参animal 的类型是Animal（基类），实际上对应到Bird（父类）的实例
    public static  void  feed(Animal animal){
        animal.eat("谷子");
    }
    //(1)直接赋值
    public static void main1(String[] args) {

        Bird b = new Bird("小小鸟");
        //直接赋值
        //此时bird 是一个父类（Animal）引用，指向一个子类（Bird）的实例，这种写法称为向上转型
        Animal bird = new Bird("小小飞");
    }
}
