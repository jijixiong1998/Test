package Demo2继承语法规则;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:15:41
 */
public class Bird extends Animal {
    public Bird(String name) {
        super(name);
    }
    //在这个代码中，如果在子类的eat()方法中直接调用eat()（不加super），那么此时就认为是调用子类自己的eat方法；
    // 而加上super关键字，才是调用父类的方法；
    @Override
    public void eat(String food){
        //修改代码，让子类调用父类的接口
        super.eat(food);
        System.out.println("我是一只鸟。。。");
        System.out.println(this.name + "正在吃" + food);
    }

    public void fly(){

        System.out.println(this.name + "正在飞。。。。");
    }
}
