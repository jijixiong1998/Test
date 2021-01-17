package Demo6;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:20:19
 */
/*构造D对象的同时，会调用B的构造方法；
* B的构造方法中调用了func方法，此时会触发动态绑定，会调用D中的func;
* 此时D对象自身还没有构造，此时num处于未初始化状态，值为0；*/
public class D extends  B {
    private int num = 1;
    @Override
    public void func(){
        System.out.println("D.func()" + num);
    }
}
