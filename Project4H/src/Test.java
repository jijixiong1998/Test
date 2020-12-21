/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 09
 * Time:8:45
 */
//方法的使用练习
public class Test {
    //递归求n的阶乘分析
    public static int factor(int n){
        System.out.println("函数开始，n = " + n);
        if(n == 1){
            System.out.println("函数结束，n = 1 ret= 1");
            return 1;
        }

        int ret;
        ret = n * factor(n - 1);
        System.out.println("函数结束，n = " + n + ",ret = " + ret);
        return ret;
    }

    public static void main(String[] args) {
        int n = 5;
        int ret = factor(n);
        System.out.println( "ret = "+ ret);
    }
    //6.递归——求n!
    public static int factor1(int n){
        if(n == 1){
            return 1;
        }
        return n * factor1(n - 1);//factor调用函数自身
    }
    public static void main6(String[] args) {
        int n = 5;
        int ret = factor1(n);
        System.out.println("ret = " + ret);
    }

    //5.重载
    public static int add(int x,int y){
        return x + y;
    }
    public static double add(double x,double y){
        return x + y;
    }
    public static double add(double x,double y,double z){
        return x + y + z;
    }
    public static void main5(String[] args) {
        int a = 10;
        int b = 20;
        int ret = add(a,b);
        System.out.println("ret = " + ret);

        double a1 = 20.5;
        double b1= 30.1;
        double ret1 = add(a1,b1);
        System.out.println("ret1 = "+ ret1);

        double a2 = 20.3;
        double b2 = 20.5;
        double c2 = 23.1;
        double ret2 = add(a2,b2,c2);
        System.out.println("ret2 = "+ ret2);
    }

    //4.方法是可以没有返回值类型的
    public static void print(int x,int y){
        System.out.println("x = " + x + ",y = " + y);
    }
    public static void main4(String[] args) {
     int a = 10;
     int b = 20;
     print(a,b);
    }

    //3.实现数据的交换——传引用类型参数——如传数组
    public static void swap(int[] arr){
        int tmp = arr[0];
        arr[0] = arr[1];
        arr[1] = tmp;
    }
    public static void main3(String[] args) {
        int[] arr = {10,20};
        swap(arr);
        System.out.println("a = " + arr[0] + ",b =" + arr[1]);
    }


    //2.实参和形参的关系——交换两个变量
    public static void swap(int num1,int num2){
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    public static void main2(String[] args) {
        int a = 10;
        int b = 20;
        swap(a,b);
        System.out.println("a = " + a+",b =" + b);
    }



    //1.写方法——实现两个整数相加
    //方法的定义
    public static int Add(int num1,int num2){
        return (num1 + num2);
    }
    public static void main1(String[] args) {
        int a = 3;
        int b = 7;
        //方法的调用
        int ret = Add(a ,b);
        System.out.println(ret);
    }
}
