package src;

import com.sun.xml.internal.ws.api.model.wsdl.WSDLOutput;
import org.w3c.dom.ls.LSOutput;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 04
 * Time:16:08
 */
public class Test1 {
    //11.数值提升
    //不同类型的数据缓和运算，范围小的会提升成范围大的；
    //对于short  byte这种比4 个字节小的数据类型，会先提升成4个字节的int，在参与运算。
    //当int和long混合运算的时候，int会提升成long ，——得到的结果仍然是long类型——需要使用long类型的变量来接收结果，
    // ——如果非要用int来接收结果，就需要使用强制类型转换。
    //(1)int 和 long 混合运算
/*    public static void main(String[] args) {
      int a = 20;
      long b = 20;
      //int c = a + b;编译出错，需将long 转换成 int ，但会丢失精度
        long d = a + b;
        System.out.println(d);

    }*/
    //(2)byte 和  byte的运算
    // byte 和byte是相同的类型，但在运算时会出现编译错误，
    //原因：虽然a 和  b都是byte，但是在计算 a + b 会先将 a 和 b 都提升为int，在进行计算，
    // 得到的结果也是int，——所以再将其赋值给c会出现错误。
    //由于计算机的CPU通常是按照  4个字节为单位从内存中读写数据，
    //为了硬件上实现方便，诸如byte  和 short 这种地域4各个字节的类型，——在计算时会先提升为int，在进行计算。
/*    public static void main(String[] args) {
        byte a = 10;
        byte b  = 20;
        //byte c = a + b;编译报错，不兼容的类型，从int 转换到 byte 可能会发生精度丢失
        byte c = (byte)(a + b);
        System.out.println(c);
    }*/

//    10.类型转换：
//    不同数字类型的变量之间赋值，表示范围更小的类型能隐式转换成范围较大的类型
//    如果需要把范围大的类型赋值给范围小的，需要强制类型转换，但可能会反生精度丢失。
//    将一个字面值常量进行赋值的时候，Java会自动针对数字范围进行检查。

    //9.字符串类型变量——String 变量名= “初始值”；——属于引用类型
    //Java使用  双引号 + 若干字符  表示字符串面值

    public static void main(String[] args) {
        String a= "hello";
        String b = "jijixiong";
        //Java中的字符串的 + 操作，表示字符串拼接
        String c = a + b;//hellojijixiong
        System.out.println(c);
    }
    //8.布尔类型变量——boolean 变量名= 初始值
    //boolean类型的变量只有两种取值：true——真；false——假
    //boolean类型有些JVM的实现是占1个字节，有些是占1个bit，没有明确规定。
/*    public static void main(String[] args) {
        boolean flag = true;
        System.out.println(flag);
    }*/


    //7.短整型变量——short 变量名 = 初始值
    //short只占2个字节——表示范围-2^15~2^15-1（-32768~23767）
/*    public static void main(String[] args) {
        short value = 1;
        System.out.println(value);
    }*/

    //6.字节类型的变量——byte 变量名 = 初始值
    //字节类型表示的也是整数——只占一个字节——表示范围-2^7~2^7-1(-128~127)
/*    public static void main(String[] args) {
        byte value = 0;
        System.out.println(value);
    }*/

    //5.字符类型变量——char 变量名= 初始值
    //在计算机中的字符本质上是一个整数，在C语言中使用ASCII表示字符，在Java中使用Unicode表示字符——因此一个字符占用两个字节。
    //Java中使用  单引号 + 单个字母  的形式表示字符字面值
/*    public static void main(String[] args) {
        char ch1 ='A';
        char ch2 = 97;
        //使用一个字符可以表示一个汉字
        char ch3 =  '熊';
        System.out.println(ch1);
        System.out.println(ch2);
        System.out.println(ch3);
    }*/

    //4.单精度浮点型变量——float 变量名 = 初始值
    //在Java中float占4个字节
/*    public static void main(String[] args) {
        float num = 1.0f;
        System.out.println(num);
    }*/

/*//3.双精度浮点型变量——double 变量名 = 初始值；
    //在Java中，int除以int的值仍然是int（会直接舍弃小数部分）
*//*public static void main(String[] args) {
    double num = 1.0;
    int num1 = 5;
    int num2 = 2;
    double num3 = 5;
    double num4 = 2;
    System.out.println(num);
    System.out.println(num1 /num2);//2
    System.out.println(num3 / num4);//2.5
}*/
/*//2.长整型变量： long 变量名 = 初始值；
    //Java中long型占8个字节——数据范围-2^63~2^63-1
   *//* public static void main(String[] args) {
    long num = 10L;//定义一个长整形变量，初始值写作10L——表示一个长整型的数字
        System.out.println(num);
}*/
//1.整型变量： int 变量名 = 初始值；
// 在Java中，一个int变量占4字节，和操作系统没有直接关系——4个字节可表示的数据范围是-2^31~2^31-1（大概-21亿~+21亿）

/*    public static void main(String[] args) {
        int num = 10;
        System.out.println(num);
        //查看Java中的整型数据范围
        System.out.println(Integer.MAX_VALUE);//2147483647
        System.out.println(Integer.MIN_VALUE);//-2147483648
    }*/

}
