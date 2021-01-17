package Demo1;

import java.util.Date;
//import static java.lang.System.*;
import static java.lang.Math.*;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:14:52
 */
//包+ 继承+ 多态
    //1.包是组织类的一种方式——使用包的主要目的是保证类的唯一性
public class Test1 {
    //(1)导入包中的类
    //可以使用java.util.Date的方式引入java.util这个包中的Date类；
    //也可以使用import语句导入包
//    public static void main(String[] args) {
//        java.util.Date date = new java.util.Date();
//        //得到一个毫秒级别的时间戳
//        System.out.println(date.getTime());
//    }
    public static void main1(String[] args) {

        Date date = new Date();
        //得到一个毫秒级别的时间戳
        System.out.println(date.getTime());
    }
    //如果要使用java.util中的其它类。也可以使用import java.util.*

    //2.静态导入import static java.lang.System.*;

//    public static void main2(String[] args) {
//        out.println("hello");
//    }

    public static void main2(String[] args) {
        double x = 12;
        double y = 32;
        //静态导入的方式更方便
        //double result = Math.sqrt(Math.pow(x,2) + Math.pow(y,2));
        double ret = sqrt(pow(x,2) + pow(y,2));
        System.out.println(ret);
    }
    //3.报的访问权限控制
    /*（1）private中的成员只能被类的内部使用；
    * （2）默认（什么也不写）——包访问权限控制：
    * （3）如果某个成员不包含public 和private关键字，此时这个成员可以在包内部的其它类使用，但不能在包外部的类使用；*/
    public static void main(String[] args) {
        Test2 test2 = new Test2();
        System.out.println(test2.val);
    }




}

