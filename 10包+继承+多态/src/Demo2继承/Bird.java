package Demo2继承;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:15:23
 */
/*观察可发现：Animal 和Cat 和Bird 这几个类中存在一定的关联关系：
* （1）这三个类都具备一个相同的eat()方法，而且行为是完全一样的；
* （2）这三个类都具备一个相同的name属性，而且意义是完全一样的；
* （3）从逻辑上，Cat和Bird都是一种Animal（即is ——a 语义）；
* 因此，可以让Cat和Bird分别继承Animal类，来达到代码重用的效果；
* 此时，Animal这样被继承的类——我们称之为父类  基类  超类
* 对于像 Cat 和Bird 这样的类，我们称为子类  派生类；
* 子类也会继承父类的字段和方法，以达到代码重用的效果。*/
public class Bird {
    public String name;

    public Bird(String name) {

        this.name = name;
    }

    public void eat(String food)
    {
        System.out.println(this.name + "正在吃" + food);
    }


    public void fly(){

        System.out.println(this.name + "正在飞.....");
    }

}
