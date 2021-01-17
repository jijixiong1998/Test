package Demo4多态;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:34
 */
public class Animal {
    protected String name;

    public Animal(String name) {
        this.name = name;
    }

    public void eat(String food){
        System.out.println("我是一只小动物。。。。");
        System.out.println(this.name + "正在吃。。。。" +food);
    }
}
