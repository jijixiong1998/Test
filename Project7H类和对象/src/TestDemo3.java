import java.util.Arrays;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 29
 * Time:18:59
 */
/*



    public static void main1(String[] args) {
        int[] array1 = {1,2,3,4,5};
        int[] array2 = {9,8,7,6,5};
        for(int i = 0;i < array1.length;i++) {
            int tmp = array1[i];
            array1[i] = array2[i];
            array2[i] = tmp;
        }
    }

    public static void swap(int[] array1,int [] array2) {
        int len1 = array1.length;
        int len2 = array2.length;
        //alt+enter
        int len = len1 > len2 ? len2 : len1;

        int lena = Math.min(len1,len2);
        for (int i = 0; i < len; i++) {

        }
    }
* */
public class TestDemo3 {
    //交换两个不等长数组——给定两个整型数组, 交换两个数组的内容.
    public static void reverseArr(int[] arr1,int[] arr2){
        int len1 = arr1.length;
        int len2 = arr2.length;
        int len = Math.min(len1,len2);//int len = len1 < len2 ? len1 : len2;
        for (int i = 0; i < len ; i++) {
            int tmp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = tmp;
        }
    }

    public static void main2(String[] args) {
        int[] arr1 = {1,2,3,45,6};
        int[] arr2 = {5,6,7,8,9,25,89};
        reverseArr(arr1,arr2);
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
    }

    //交换两个等长数组——给定两个整型数组, 交换两个数组的内容.
    public static void main(String[] args) {
        int[] arr1 = {1,2,3,4,5};
        int[] arr2 = {6,7,8,9,10};
        for (int i = 0; i < arr1.length ; i++) {
            int tmp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = tmp;
        }
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
    }
}
