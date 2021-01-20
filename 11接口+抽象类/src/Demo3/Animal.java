package Demo3;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:46
 */
//实现多个接口
    /*有时候我们需要让一个类同时继承自多个父类；
    * 然而Java只支持单继承，一个类只能extends一个父类；但是可以同时实现多个接口，也能达到多继承类似的效果；*/
public class Animal {
    protected  String name;

    public Animal(String name) {
        this.name = name;
    }
}
