package Demo4多态;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:35
 */
public class Bird extends Animal {
    public Bird(String name) {
        super(name);
    }
    public void eat(String food){
        System.out.println("我是一只小小鸟。。。。");
        System.out.println(this.name + "正在吃"+ food);
    }
    public void fly(){
        System.out.println(this.name + "正在吃。。。。");
    }
}
