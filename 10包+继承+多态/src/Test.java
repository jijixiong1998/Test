/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 11
 * Time:18:47
 */
class B{
    public int func(){
        System.out.println("B");
        return 0;
    }
}
 class D extends B{
    @Override
    public int func(){
        System.out.println("D");
        return 0;
    }
        }
public class Test {
    public static void main(String[] args) {
        B a= new B();
        B b = new D();
        a.func();
        b.func();
    }
}
