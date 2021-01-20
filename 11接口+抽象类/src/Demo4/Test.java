package Demo4;

import com.sun.xml.internal.ws.api.model.wsdl.WSDLOutput;

import java.util.Arrays;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:21:05
 */
public class Test {
    //给定一个学生对象数组，对这个对象数组中的元素进行排序（按分数降序）
    public static void main(String[] args) {
        Student[] students = new Student[]{ new Student("张三",20),
                new Student("李四",85),
                new Student("王五",78),
                new Student("赵六",19),};
        //对于sort()方法，需要传入的数组的每个对象都是“可比较的”，需要具备compareTo的能力，
        //通过重写compareTo方法，就可以定义比较规则；
        Arrays.sort(students);
        System.out.println(Arrays.toString(students));
        //可发现，和普通的猪呢个属于不一样，两个整数是可以直接比较的，大小关系明确；
        //而两个学生对象的大小关系该如何确定；需自行指定
        //对Student类实现Comparable接口，并实现其中的compareTo方法；
//        Arrays.sort(students);
//        System.out.println(Arrays.toString(students));
    }
}
