import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 06
 * Time:17:53
 */
public class Test {
    //12.奇数位于偶数之前——调整数组顺序使得奇数位于偶数之前。调整之后，不关心大小顺序。
    public static void movetArr(int[] array){
        int left = 0;
        int right = array.length - 1;
        while(left < right){
            //从左边找一个偶数
     		while ((left < right) && (array[left] % 2 == 1)){
     			left++;
                    }
     		//从右边找一个奇数
      		while ((left < right) && (array[right] % 2 == 0)){
     			right--;
            }
            if (left < right){
     			int tmp = array[left];
     		    array[left] = array[right];
     			array[right] = array[left];
           }
        }
    }
    public static void printArr(int[] array){
        int len = array.length - 1;
     	for (int i = 0; i < len;i++){
            System.out.print(array[i] + " ");
        	}
      }

    public static void main(String[] args) {
        int[] array = {2,4,6,7,8,9,90};
        printArr(array);
    }



    //11.最大值——创建方法求两个数的最大值max2，随后再写一个求3个数的最大值的函数max3。
    public static int maxValue(int num1,int num2){
        return((num1 > num2)?num1:num2);
    }
    public static int maxValue(int num3,int num4,int num5){
        return(maxValue(maxValue(num3,num4),num5));
    }
    public static void main111(String[] args) {
        System.out.println("三者中的最大数为：" + maxValue(77,99,88));
    }
    //
    //​ 要求：在max3这个函数中，调用max2函数，来实现3个数的最大值计算
    //10.求最大值方法的重载——在同一个类中定义多个方法：
    // 要求不仅可以求两个整数的最大值，还可以求两个小数的最大值，以及两个小数和一个整数的大小关系
    public static int maxNum(int num1,int num2){
        return ((num1 > num2)?num1 :num2);
    }
    public static double maxNum(double num3,double num4){
        return ((num3 > num4)?num3:num4);
    }
//    public static double MaxNum(double num5,double num6,int num7){
//        return
//    }
    public static void main10(String[] args) {
        System.out.println(maxNum(67,56));
        System.out.println(maxNum(68.0,89.9));
    }

    //9.求和的重载——在同一个类中,分别定义求两个整数的方法 和 三个小数之和的方法。 并执行代码，求出结果
    public static int add(int num1,int num2){
        return (num1 + num2);
    }
    public static double add(double num3, double num4, double num5){
        return (num3 + num4 + num5);
    }
    public static void main9(String[] args) {
        System.out.println(add(55,22));
        System.out.println(add(3.3,5.5,6.6));
    }

    //8.有一组数据，只有一个数字是出现一次，其他是两次，请找出这个数字
    public static int findOnceNum(int[] array){
        int ret = 0;
        for (int i = 0; i <array.length ; i++) {
            ret ^= array[i];
        }
        return ret;
    }

    public static void main8(String[] args) {
        int[] array = {1,3,5,6,1,3,5};
        System.out.println(findOnceNum(array));
    }




    //7.青蛙跳台阶问题——递归实现
    //一直青蛙一次可以跳上1 级台阶，也可以跳上2级台阶。求该青蛙跳上n级的台阶总共需要多少种跳法；
    /*分析：1 个台阶 —— 1 种 方法
           2 个台阶 ——  2 种方法
           3 个台阶 —— 3 种方法
           4 个台阶 —— 5 种方法
           。。。
           n  个台阶 —— （n - 1） + （n - 2） 种方法
    */
    public static int tol(int n){
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }else{
            return tol(n - 1) + (n - 2);
        }
    }

    public static void main7(String[] args) {
        System.out.println("请输入台阶数：");
        Scanner sc = new Scanner(System.in);
        int ret = sc.nextInt();
        System.out.println(tol(ret));
    }

    //6.汉若塔问题
    public static void move(int n,char pos1,char pos2){
        if(n == 1){
            System.out.println(pos1 + "->" + pos2);
        }
    }
    public static void hanuota(int n,char pos1,char pos2 ,char pos3){
        if(n == 1){
            move(n,pos1,pos3);
        }
        else{
            hanuota(n - 1,pos1,pos3,pos2);//将 n - 1 个盘子看成整体，借助 C 从 A 移到 B
            move(n,pos1,pos3);//将第 n 个盘子从 A 移到 C
            hanuota(n - 1,pos2,pos1,pos3);//将 n - 1 个盘子借助 A 从 B 移到 C
        }
    }
    public static void main6(String[] args) {
        int n = 4;
        char pos1 = 'A';
        char pos2 = 'B';
        char pos3 = 'C';
        hanuota(n,pos1,pos2 ,pos3);
    }
    //5.1求斐波那契数列第N项
    public static void main51(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=Fabonacci(n);
        System.out.println("第" + n + "项" + "斐波那契数为"+sum);
    }
    public static int Fabonacci(int n){
        int sum=0;
        if(n==1||n==2){
            sum=n;
        }
        int f1=1;int f2=1;
        for(int i=3;i<=n;i++){
            sum=f1+f2;
            f1=f2;
            f2=sum;
        }return sum;
    }

    //5.求斐波那契数列
    //(1)递归实现
    public static int fib(int n){
        if(n == 1 || n== 2){
            return 1;
        }
        return  fib(n - 1) + fib(n - 2);
    }

    public static void main5(String[] args) {
        int ret = fib(40);
        System.out.println(ret);
    }

    //(2)循环（迭代）实现
    public static int fib1(int n){
        int f1 = 1;
        int f2 = 1;
        int cur = 1;
        for (int i = 0; i <= n; i++) {
            cur = f1 + f2;
            f1 = f2;
            f2 = cur;
        }
        return cur;
    }

    public static void main55(String[] args) {
        int ret = fib(40);
        System.out.println(ret);
    }
    //4.递归方法：输入一个非负整数，返回组成它的数字之和——如1729 ——返回1 + 7 + 2 + 9 = 19
    public static int sum1(int num){
        if(num < 10){
            return num;
        }
        return num % 10 + sum1(num / 10);
    }

    public static void main4(String[] args) {
        int ret = sum1(1729);
        System.out.println(ret);
    }

    //3.递归求1 + 2 + 3 + ... + 10的和
    public static int sum(int num){
        if(num == 1){
            return 1;
        }
        return num + sum(num - 1);
    }
    public static void main3(String[] args) {
        int ret = sum(10);
        System.out.println(ret);
    }

    //2.按顺序打印一个数字的每一位——如1334 ——打印 1  2   3   4
    public static void print(int num){
        if(num > 9){
            print(num / 10);
        }
        System.out.print(num % 10 + " ");
    }
    public static void main2(String[] args) {
        int n = 123;
        print(n);
    }


    //1.递归求n的阶乘
    public static int factor(int n){
        if(n == 1){
            return 1;
        }
        return n * factor(n - 1);
    }
    public static void main1(String[] args) {
        int n = 5;
        int ret = factor(n);
        System.out.println("ret = " + ret);

    }

//1.1求阶乘的和1！  + 2！ + 3！ + 4！ + ... + n !的和
    public static int factor1(int n){
        int ret = 1;
        for (int i = 1; i <= n ; i++) {
            ret  *= i;
        }
        return  ret;
    }
    public static void main11(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
        int sum = 0;
            for (int i = 1; i <= 5 ; i++) {
                sum += factor1(i);
        }
        System.out.println("sum = " + sum);
    }



}
