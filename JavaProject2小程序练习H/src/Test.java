import java.sql.SQLOutput;
import java.util.Random;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 05
 * Time:18:02
 */
public class Test {

/*    //2.获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列
    public static void main(String[] args) {
        System.out.println("请输入一个整数：56");
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        System.out.println("此二进制数的基数序列为：");
        for(int i = 31;i >= 0;i -= 2){
            int oddSeq = (num >> i) & 1;
            System.out.print(oddSeq);
        }
        System.out.println();
        System.out.print("此二进制数的偶数序列为");
        for(int i = 30;i >= 0;i -= 2){
           int eventSeq = (num >> i) & 1;
            System.out.print(eventSeq);
        }
    }*/
    //1.编写程序数一下 1到 100 的所有整数中出现多少个数字9
    public static void main(String[] args) {
        int count = 0;
        for(int num = 0; num <= 100;num++){
            if(num % 10 == 9){
                count += 1;
            }
            if(num / 10 == 9){
                count += 1;
            }
        }
        System.out.println("0——100之间数字9的个数为：" + count);
    }
    //14.猜数字游戏
/*        public static void main(String[] args) {
            Random random = new Random();
            int randNum = random.nextInt(100) + 1;//生成随机数[1，101)
            Scanner sc = new Scanner(System.in);
           while(true){
               int input = sc.nextInt();
               if(input < randNum){
                   System.out.println("输入的数字小了！");
               }else if(input > randNum){
                   System.out.println("输入的数字大了！");
               }else{
                   System.out.println(randNum + "输入正确！");
               }
           }
        }*/

    //13.输出一个整数的每一位
/*    public static void main(String[] args) {
        System.out.println("请输入一个整数：");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
            Print(num);
        }
        public static void Print(int num) {
            //递归终止条件
            if (num > 9) {
                Print(num / 10);
            }
            System.out.print(num % 10 + " ");
        }*/

    //12.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列

    //11.写一个函数返回参数二进制中1的个数———如15 ——0000 1111——4个1
/*    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = num;
        int count = 0;//计数
        while(temp != 0){
            if(temp % 2 == 1){
                count ++;
            }
            temp = temp / 2;
        }
        System.out.println(num + "对应的二进制中的1的个数为：" + count);
    }*/

    //10.编写代码模拟三次密码输入的场景，最多能输入三次密码。
    // 密码正确，提示”登录成功“，密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
/*    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3 ; i++) {
            System.out.println("请输入密码:");
           String password =  sc.next();
           if(password.equals("123abc")){
               System.out.println("恭喜你登录成功！");
               break;
           }else{
               System.out.println("登录失败！");
           }

        }
    }*/

    //9.求出0——999之间的所有”水仙花数“并输出。水仙花数——一个三位数，其各位数字的立方和恰好等于该数本身。
/*    public static void main(String[] args) {

        for (int i = 100; i <1000 ; i++) {
            int num = i %10;
            int dit = (i / 10) % 10;
            int hun = i /100;
            int sum = num * num * num + dit * dit * dit + hun * hun * hun;
            if(i == sum){
                System.out.println(i);
            }
        }

    }*/

    //8.编写程序计算1——100所以整数中出现多少个数字0.

    //7.计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5..... + 1/99 -1/100的值

/*
        public static void main(String[] args) {
            double sum = 0.0;
            int flag = 1;
           for(int i = 1;i <= 100; i++){
               sum += flag * 1.0/i;
               flag = -flag;
           }
            System.out.println(sum);
        }
*/

    //6.求两个正整数的最大公约数
/*    public static void main(String[] args) {
        //辗转相除法实现
        int num1 = 36;
        int num2 = 24;
        int temp = 0;
        if(num1 < num2){//比较,得出较大值num1和较小值num2
            temp  = num1;
            num1 = num2;
            num2 = temp;
        }
        while(num2 != 0){ //通过循环求两数的余数，直到余数为0
           temp = num1 % num2;
           num1 = num2;
           num2 = temp;
        }
        System.out.println("最大公约数为：" + num1);

    }*/

    //5.输出乘法口诀表
/*    public static void main(String[] args) {
        for (int i = 1; i <= 9 ; i++) {
            for(int j = 1;j <= i;j ++){
                System.out.print(i + "*" + j +"=" + i * j + "\t");
            }
            System.out.println();
        }
    }*/
    //5.1输出 n * n的乘法口诀表
/*    public static void main(String[] args) {
        System.out.println("请输入乘法口诀的行数：");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1; i <= n;i ++){
            for(int j = 1; j <= i ;j++){
                System.out.print(i + "*" + j + "=" + i * j + "\t");
            }
            System.out.println();
        }
    }*/

    //4.输出1000——2000之间的所有的闰年
    //普通闰年——可以整除4，但不能整除100；
    //世纪闰年——可以整除400
/*    public static void main(String[] args) {
        for(int year = 1000;year <= 2000;year++){
            if(year / 4 == 0 && year / 400 != 0 || year / 400 == 0){
                System.out.println(year + "是闰年！");
            }else{
                System.out.println(year + "不是闰年！");
            }
        }
    }*/

    //3.打印 0——100之间的所有的素数
/*        public static void main(String[] args) {
            int sum = 0;
            for(int i = 2;i <= 100;i++) {
                int count = 0;
                for(int j=2;j < i;j++) {
                    if(i%j == 0) {
                        count++;
                    }
                }
                if(count == 0) {
                    System.out.print(i + " ");
                    sum += 1;
                }
            }
            System.out.println(sum);
        }*/
    //2.判定一个数字是否是素数——如果一个正整数只有两个因子，1 和 它 本身，则此数为一个素数
/*    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int i = 2;
        for(;i < num ;i++){
            if(num % i == 0){
                System.out.println(num + "不是素数!");
                break;
            }
        }
        if (num == i){
            System.out.println(num + "是素数！");
        }
    }*/
    //2.1判定一个数的奇偶数
    /*public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if(num % 2 != 0){
            System.out.println(num + "是奇数!");
        }else{
            System.out.println(num + "是偶数!");
        }

    }*/


    //1.根据年龄打印：少年（低于18岁）  青年（19——28岁） 中年（29-55） 老年（56以上）
/*    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();
        if(age <= 18){
            System.out.println("少年！");
        }else if(age >18 && age <=28){
            System.out.println("青年！");
        }else if(age > 29 && age <= 55 ){
            System.out.println("中年！");
        }else if(age > 56){
            System.out.println("老年！");
        }
    }*/
}
