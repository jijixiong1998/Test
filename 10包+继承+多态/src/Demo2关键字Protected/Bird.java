package Demo2关键字Protected;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:16
 */
public class Bird extends Animal {
    public Bird(String name) {
        super(name);//使用super 调用父类的构造方法
    }
    public void fly(){
        //对于父类的protected 字段，子类可以正确访问
        System.out.println(this.name + "正在飞。。。。");
    }
}
