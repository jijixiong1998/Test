package Demo2继承;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:15:19
 */
//可以为每个类创建一个单独的java文件，类名必须与.java文件名匹配（大小写敏感）；
//设计一个动物类
public class Animal {
    public String name;

    public Animal(String name) {
        this.name = name;
    }

    public void eat(String food) {
        System.out.println(this.name + "正在吃" + food);
    }
}
