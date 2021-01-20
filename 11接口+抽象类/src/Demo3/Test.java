package Demo3;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:46
 */
public class Test {
    public static void main(String[] args) {
        Cat cat = new Cat("小猫");
        walk(cat);

        Frog frog = new Frog("小青蛙");
        frog.run();
    }

    //在walk方法中，我们并不关注到底是哪种动物，只要参数时会跑就行；
    public static void walk(IRunning iRunning){
        System.out.println("散步呢。。。");
        iRunning.run();
    }
}
