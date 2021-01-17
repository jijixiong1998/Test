package Demo2关键字Protected;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:16:15
 */
public class Animal {
    protected String name;

    public Animal(String name) {
        this.name = name;
    }

    public void eat(String food){
        System.out.println(this.name + "正在吃" + food);
    }
}
