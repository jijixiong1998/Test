package Demo3;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:49
 */
public class Cat extends  Animal implements  IRunning{
    public Cat(String name) {
        super(name);
    }
    @Override
    public void run(){
        System.out.println(this.name + "正在跑。。。。");
    }
}
