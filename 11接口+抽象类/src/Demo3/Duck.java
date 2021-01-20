package Demo3;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:54
 */
//Java面向对象编程中最常见的用法：一个类继承一个父类，同时实现多种接口；
public class Duck extends Animal implements IRunning,ISwimming,IFlying {
    public Duck(String name) {
        super(name);
    }

    @Override
    public void fly() {
        System.out.println(this.name + "正在飞。。。。。");
    }

    @Override
    public void run() {
        System.out.println(this.name + "正在跑。。。。");
    }

    @Override
    public void swim() {
        System.out.println(this.name + "正在游泳。。。。");
    }
}
