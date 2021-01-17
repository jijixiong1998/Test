package Demo2继承语法规则;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:15:38
 */
public class Animal {
    public String name;

    public Animal(String name) {
        this.name = name;
    }

    public void eat(String food){
        System.out.println(this.name + "正在吃" + food);
    }
}
