import java.util.Arrays;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 09
 * Time:13:36
 */
public class Test {
    //5.创建一个 int 类型的数组, 元素个数为 100, 并把每个元素依次设置为 1 - 100——创建数组并赋初始值
    public static void main55(String[] args) {
        int[] ret = makeArr();
       printArr1(ret);
    }
    public static void printArr1(int[] arr){
        for (int i = 0; i < arr.length ; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    public static int[] makeArr(){
        int[] arr = new int[100];
        for (int i = 0; i < 100 ; i++) {
            arr[i] = i;
        }
        return arr;
    }


    //4.实现一个方法 printArray, 以数组为参数, 循环访问数组中的每个元素, 打印每个元素的值.——打印数组
    public static void main444(String[] args) {
        int[] arr = {5,43,2,6,7,8,9};
        printArray3(arr);
    }
    public static void printArray3(int[] arr){
        for (int i = 0; i < arr.length ; i++) {
            System.out.print(arr[i] + " ");
        }
    }


    //3.实现一个方法 transform, 以数组为参数, 循环将数组中的每个元素 乘以 2 ,
    // 并设置到对应的数组元素上. 例如 原数组为 {1, 2, 3}, 修改之后为 {2, 4, 6}——改变原有数组的值
    public static void main333(String[] args) {
        int[] arr = {3,4,5};
        int[] ret = transform2(arr);
        printArray2(ret);
    }
    public static void printArray2(int[] arr){
        for (int i = 0; i < arr.length ; i++) {
            System.out.println(arr[i]);
        }
    }
    public static int[] transform2(int[] arr){
        int[] ret = new int[arr.length];
        for (int i = 0; i <arr.length ; i++) {
            ret[i] = arr[i] * 2;
        }
        return ret;
    }
    //1.实现一个方法 sum, 以数组为参数, 求数组所有元素之和——数组所有元素之和
    public static int sum(int[] arr){
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static void main111(String[] args) {
        int[] arr = {1,2,3,4,5,5};
        System.out.println("该数组所有元素求和为： "+sum(arr));
    }

    //20.Java内置的排序算法 —— Arrays.sort()
    public static void main(String[] args) {
        int[] arr = {23,56,1,3,5};
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
    }
    //19.数组排序——冒泡排序
    //给定一个数组，让数组升序（降序）排序
    //算法思路——每次尝试找到当前待排序区间中最小（最大）的元素，放到数组的最前面（最后面）
    public static void main19(String[] args) {
        int[] arr = {90,5,6,86};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static  void bubbleSort(int[] arr){
        //[0,bound）构成了一个前闭后开区间，表示已排序区间
        //[bound,length)构成一个前闭后开区间，表示待排序区间
        //每循环一次，就找到一个合适大小的元素，已排序区间就增大1
        for(int bound = 0;bound < arr.length;bound ++){
            for(int cur = arr.length - 1;cur > bound;cur--){
                if(arr[cur - 1] >arr[cur]){
                    int tmp = arr[cur - 1];
                    arr[cur - 1] = arr[cur];
                    arr[cur] = tmp;
                }
            }
        }
    }

    //18.检查数组的有序性
    //给定一个个整型数组，判断是否该数组是有序的（升序）
    public static void main18(String[] args) {
        int[] arr = {43,3,56,78,90};
        System.out.println(isSorted(arr));
    }
    public static boolean isSorted(int[] arr){
        for (int i = 0; i < arr.length - 1 ; i++) {
            if(arr[i] > arr[i + 1]){
                return false;
            }
        }
        return true;
    }


    //17.二分查找
    static int count = 0;//创建一个成员变量，记录二分查找循环次数

    public static void main17(String[] args) {
        int[] arr = makeBinArray();
        int ret = binarySearch1(arr,9999);
        System.out.println("ret = " + ret +",count = " + count);
    }
    public static int[] makeBinArray(){
        int[] arr = new int[10000];
        for (int i = 0; i < 10000 ; i++) {
            arr[i] = i;
        }
        return arr;
    }
    public static int binarySearch1(int[] arr,int toFind){
        int left = 0;
        int right = arr.length - 1;
        while(left <= right){
            count++;//使用一个循环变量记录循环执行次数
            int mid = (left + right)/2;
            if(toFind < arr[mid]){
                //左侧寻找
                right = mid - 1;
            }
            else if(toFind > arr[mid]){
                //右侧区间寻找
                left = mid + 1;
            }
            else{
                //相等，说明找到了
                return mid;
            }
        }
        //循环结束，说明没有找到；
        return -1;
    }


    //16.查找数组中指定元素（二分查找）
    // 针对有序数组，可以使用更更高效的二分查找——有序分为——升序和降序
    //以升序为例——二分查找的思想是先取中间位置的元素，考要找的值比中间元素大还是小——如果小，就在左边找；——如果打，就去右边找。
   public static int binarySeach(int[] arr,int toFind){
       int left = 0;
       int right = arr.length - 1;
       while(left <= right){
           int mid = (left + right)/2;
           if(toFind < arr[mid]){
               //如果要找的元素小于中间值，则去左侧查找；
               right = mid - 1;
           }else if(toFind > arr[mid]){//否则，在右侧查找
               left = mid + 1;
           }else{//相等，说明找到了
               return mid;
           }
       }
       //循环结束，说说明没有找到；
       return  -1;
    }
    public static void main16(String[] args) {
        int[] arr = {2,3,4,5,6,7,8};
        System.out.println(binarySeach(arr, 6));
    }

    //15.查找数组中指定元素（顺序查找）
    // 给定一个数组，在给定一个元素，找出该元素在数组中的位置
    public static int find(int[] arr,int toFind){
        for (int i = 0; i < arr.length ; i++) {
            if(arr[i] == toFind){
                return i;
            }
        }
        return -1;//表示未找到
    }
    public static void main15(String[] args) {
        int[] arr = {2,89,4,5,8,67,};
        System.out.println(find(arr, 67));
    }

    //14.求数组中的平均值——给定一个整型数组，求平均值
    public static double avg(int[] arr){
       int sum = 0;
        for (int x:arr) {
            sum += x;
        }
        return (double)sum/(double) arr.length;
    }
    public static void main14(String[] args) {
        int[] arr1 = {3,5,6,7,8,98};
        System.out.println("此数组所有元素的平均值为：" + avg(arr1));
    }

    //13.找出数组中的最大元素——给定一个整型数组，找到其中的最大元素
    public static int max(int[] arr){
        int max = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
    public static void main13(String[] args) {
        int[] arr = {3,56,7,8,9};
        System.out.println("此数组中的最大元素为：" + max(arr));
    }

    //12.模拟实现数组拷贝
    public static int[] copyOf(int[] arr){
        int[] ret = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            ret[i] = arr[i];
        }
        return ret;
    }

    //11.数组拷贝
    public static void main11(String[] args) {
        int[] arr = {12,3,4,5,6,6,7};
        int[] newArr = Arrays.copyOf(arr,arr.length);

        arr[0] = 10;
        System.out.println("arr：" + Arrays.toString(arr));
        System.out.println("newArr: " + Arrays.toString(newArr));

        //拷贝某个范围
        //CopyOf是将数组进行了深拷贝，即又创建了一个数组对象，拷贝原有数组中的所有元素到新数组中。
        //因此修改原数组，不会影响到新数组。
        int[] newArr1 = Arrays.copyOfRange(arr,2,4);
        System.out.println("newArr1: " + Arrays.toString(newArr1));
    }

    //10.实现数组转字符串
    public static void main10(String[] args) {
        int[] arr = {1,2,3,4,5,6};
        System.out.println(toString(arr));
    }
    public static String toString(int[] arr){
        String ret = "[";
        for (int i = 0; i < arr.length ; i++) {
            //借助String += 进行字符串拼接
            ret += arr[i];
            //除了最后一个元素之外，其它元素后面都要加上“,”
            if(i != arr.length - 1) {
                ret += ",";
            }
        }
        ret += "]";
        return ret;
    }


    //9.数组练习——数组转字符串——使用Arrays.toString()方法打印数组
    public static void main9(String[] args) {
        int[] arr = {1,2,3,4,5,6};
        String newArr = Arrays.toString(arr);
        System.out.println(newArr);
    }

    //8.数组作为方法的返回值——写一个方法，将数组中的每一个元素 * 2
    public static void main8(String[] args) {
        int[] arr = {1,2,3,4};
        int[] output = transform(arr);
        printArray1(output);
    }
    public static void printArray1(int[] arr){
        for (int i = 0; i < arr.length ; i++) {
            System.out.println(arr[i]);
        }
    }
    public static int[] transform(int[] arr){
        int[] ret = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            ret[i] = arr[i] * 2;
        }
        return ret;
    }

    //7.参数传数组类型
    public static void func1(int[] arr){
        arr[0] = 10;
        System.out.println("arr[0] = " + arr[0]);
    }

    public static void main7(String[] args) {
        int[] arr1 = {12,13,11,15};
        func1(arr1);
        System.out.println("arr1[0] = " +  arr1[0]);
    }

    //6.参数传内置类型
    public static void main6(String[] args) {
        int num = 10;
        func(num);
        System.out.println("num = " + num);
    }
    public static void func(int x){
        x = 10;
        System.out.println("x = " + x);
    }

    //5.打印数组内容
    public static void main5(String[] args) {
        int[] arr1 = {2,3,4,8,5};
        printArray(arr1);
    }
    public static void printArray(int[] arr){
        for(int x:arr){
            System.out.println(x);
        }
    }

    //4.使用操作数组的工具类Arrays.toString（）——将数组以字符串的形式输出
    public static void main4(String[] args) {
        int[] arr = {4,5,7,6};
        System.out.println(Arrays.toString(arr));
    }

    //3.使用foreach遍历数组
    public static void main3(String[] args) {
        int[] arr = {7,8,9,0};
        for (int x:arr){
            System.out.println(x);
        }
    }

    //2.遍历数组
    public static void main2(String[] args) {
        int [] arr = {1,2,3,4,5};
        for (int i = 0; i <arr.length ; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void main1(String[] args) {
        //数组初始化
        //静态初始化
        int[] arr = {1,2,3};
        //获取数组长度
        System.out.println("length = " + arr.length);

        //访问数组中的元素
        System.out.println(arr[1]);
        System.out.println(arr[0]);
        arr[2] = 100;
        System.out.println(arr[2]);

        //动态初始化
//        int[] arr1 = new int[]{1,2,3};


    }
}
