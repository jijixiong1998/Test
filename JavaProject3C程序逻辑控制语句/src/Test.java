/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 06
 * Time:9:19
 */
//程序逻辑控制   顺序结构    分支结构    循环结构
public class Test {
    //4.break  和  continue
    //(1)break——让循环提前结束——执行到break就会让循环结束
    //举例1：找到100——200中第一个3的倍数
/*    public static void main(String[] args) {
        int num = 100;
        while(num <= 200){
            if(num % 3 == 0){
                System.out.println("找到了3的倍数，为" + num);
                break;
            }
            num++;
        }
    }*/
    //(2)continue ——跳过本次及循环，立即进入下次循环
    //举例1：找到100——200中所有3的倍数
//    public static void main(String[] args) {
//        int num = 100;
//        while(num <= 200){
//            if(num % 3 != 0){
//                num ++;
//                continue;
//            }
//            System.out.println("找到了3 的倍数，为" + num);
//            num ++;
//        }
//    }
    //2.分支结构
    //(1)if-else语句

    //举例1：判定一个数字是奇数还是偶数
 /*   public static void main(String[] args) {
        int num = 10;
        if(num % 2 == 0){
            System.out.println(num + "是偶数");
        }
        else{
            System.out.println(num + "是奇数");
        }
    }*/

    //举例2：判定一个数是正数还是负数
/*    public static void main(String[] args) {
        int num = 10;
        if(num > 0){
            System.out.println(num + "是正数");
        }else if(num < 0){
            System.out.println(num + "是负数");
        }else{
            System.out.println(num + "是0");
        }
    }*/

    //举例3：判定某一年是否是闰年
/*    public static void main(String[] args) {
        int year = 2000;
        if(year % 100 == 0){
            //判定世纪闰年
            if(year % 400 == 0){
                System.out.println("是闰年");
            }else{
                System.out.println("不是闰年");
            }
        }else{
            //普通闰年
            if(year % 4 == 0){
                System.out.println("普通闰年");
            }
        }
    }*/

    //(2)switch语句
    //举例1：根据day的值输出星期
 /*   public static void main(String[] args) {
        int day = 1;
        switch(day) {
            case 1:
                System.out.println("星期一");
                break;
            case 2:
                System.out.println("星期二");
                break;
            case 3:
                System.out.println("星期三");
                break;
            case 4:
                System.out.println("星期四");
                break;
            case 5:
                System.out.println("星期五");
                break;
            case 6:
                System.out.println("星期六");
                break;
            case 7:
                System.out.println("星期日");
                break;
            default:
                System.out.println("输入有误！");
                break;
        }

    }*/
    //举例1：打印1 ——10的数字
/*    public static void main(String[] args) {
        int num = 1;
        while(num <= 10){
            System.out.println(num);
            num ++;
        }
    }*/
    //举例2：计算1——100的和
/*    public static void main(String[] args) {
        int n = 1;
        int ret = 0;
        while(n <= 100){
            ret += n;
            n ++;
        }
        System.out.println(ret);
    }*/
    //举例3：计算5的阶乘
/*    public static void main(String[] args) {
        int n = 1;
        int ret = 1;
        while(n <= 5){
            ret *= n;
            n++;
        }
        System.out.println(ret);
    }*/
    //举例4：计算 1! + 2! + 3!  + 4 ! + 5!
/*    public static void main(String[] args) {
        int num = 1;
        int sum = 0;
        //外层循环负责求阶乘的和
        while(num <= 5){
            int factorRet = 1;
            int tmp = 1;
            //里层循环：求阶乘
            while(tmp <= num){
                factorRet *= tmp;
                tmp ++;
            }
            sum += factorRet;
            num ++;
        }
        System.out.println("sum =" + sum);
    }*/
    //(3)for 循环——计算 1！ + 2！ + 3！ +4！ + 5！
/*    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            int tmp = 1;
            for(int j = 1;j <= i;j ++){
                tmp *= i;
            }
            sum += tmp;
        }
        System.out.println("sum =" + sum);
    }*/

    //(4)do while循环
/*
    public static void main(String[] args) {
        int num = 1;
        do{
            System.out.println(num);
            num ++;
        }while(num <= 10);
    }
*/

    //1.顺序结构
/*    public static void main(String[] args) {

        System.out.println("aaa");
        System.out.println("bbb");
        System.out.println("ccc");
    }*/
}
