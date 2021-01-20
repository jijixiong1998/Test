package Demo3;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:52
 */
public class Frog extends Animal implements  IRunning ,ISwimming {
    public Frog(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println(this.name + "正在往前跳。。。");
    }

    @Override
    public void swim() {
        System.out.println(this.name + "正在游泳呢。。。。。");
    }
}
