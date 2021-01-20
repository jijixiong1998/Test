package Demo4;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 17
 * Time:21:05
 */
public class Student  implements Comparable{
    private String name;
    private int score;

    public Student(String name, int score) {
        this.name = name;
        this.score = score;
    }

    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", score=" + score +
                '}';
    }

    @Override
    public int compareTo(Object o) {
        Student student = (Student) o;
//        if(this.score > student.score){
//            return -1;
//        }else if(this.score == student.score){
//            return 0;
//        }else{
//            return 1;
//        }
        //也可以直接返回：
        return this.score - ((Student) o).score;
    }
    /*在sort方法中会自动调用compareTo()方法。
    * copareTo方法的参数是Object，其实传入的就是Student类型的对象；
    * 然后比较当前对象和参数对象之间的大小关系（按照分数计算）；
    * 如果当前对象应排在参数对象之前，返回小于0的数字；
    * 如果当前对象应排在参数对象之后，返回大于0 的数字；
    * 如果当前对象和参数对象相等，返回0*/
}
