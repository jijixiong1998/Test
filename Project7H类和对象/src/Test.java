/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 26
 * Time:8:55
 * 类和对象：创建对象，使用对象，建立对象之间的联系
 * 面向对象就是用代码（类）来描述客观世界的事物的一种方式——一个类主要包含一个事物的属性和行为
 */

    //类中的元素——成员属性
    //类中的函数——成员方法
class Person{
    public int age;
    public String name;//实例成员变量
    public static int count;//静态成员变量 ——类属性
    public int SIZE;

    //普通成员方法——》实例成员方你发
    public void eat(){
        System.out.println(name + "吃饭");
    }

    //静态成员方法
    public static void func(){
        System.out.println(count);
        System.out.println("静态方法func()");
    }
    //方法——描述一个对象的行为
    //构造方法（construction method)—— 在实例化对象的时候会自动调用到的方法，方法名字和类名相同，用于对象的初始化。
    /*public void show(){
        System.out.println("姓名" + name + " 年龄" + age);
    }*/


    @Override

    public String toString() {
        return "Person{" +
                "age=" + age +
                ", name='" + name + '\'' +
                ", SIZE=" + SIZE +
                '}';
    }
}
public class Test {

    //9.null ——在Java中，null为 ”空引用“，表示不引用任何对象，类似于C语言中的空指针。如果对null 进行. 操作就会引发异常。
    public static void main(String[] args) {
        Person person1 = null;
        System.out.println(person1.age);//NullPointerException
       /* Person person2 = new Person();
        person1 = person2;
        person1 = new Person();
        person1 = new Person();*/
    }
    //8.
    public static void main8(String[] args) {
        Person person = new Person();
        person.name = "王五";
        person.age = 19;
        System.out.println(person);//Person{age=19, name='王五', SIZE=0}
    }


    //7.静态变量
    public static void main7(String[] args) {
        Person.count++;
        Person.count++;
        Person.count++;
        Person.func();//静态方法func()
        System.out.println(Person.count);//3
    }
    //6.字段就地初始化——直接显示设置初始值
    public static void main6(String[] args) {
        Person person1 = new Person();
        person1.name = "张三";
        person1.age =22;
        person1.eat();
        //张三吃饭

        Person person2 = new Person();
        person2.name = "李四";
        person2.age = 25;
        person2.eat();
        //李四吃饭
    }



    // 5.同一个类可以创建多个实例。
    public static void main5(String[] args) {
        Person person1 = new Person();
        Person person2 = new Person();
        Person person3 = new Person();
        Person person4 = new Person();
    }
    //4.类的成员：包含：字段，方法，代码块，内部类和接口等。
    //字段（属性或成员变量）——在类内，但在方法外部定义的变量；——用于描述一个类中有哪些数据；
    /***
     * 使用 . 访问对象的字段；
     * 访问 既包含读，也包含写的过程；
     * 对于一个对象的字段如果没有显示设置初始值，那么会被设置一个默认的初值；
     *
     * 默认值规则：
     * 对于各种数字类型，默认值为0；
     * 对于boolean 类型，默认值为false；
     * 对于引用类型（String， Array，以及自定制类），默认值是null。
     */
    public static void main2(String[] args) {
        Person person = new Person();
        System.out.println(person.name);//null
        System.out.println(person.age);//0
        System.out.println(Person.count);//0
        System.out.println(person.count);//此访问方式合理但不合法，0——静态变量，需使用类名来访问，
    }



    //3.类的实例化——用类类型创建对象的过程
    //new 关键字用于创建一个对象的实例；
    // 使用 . 来访问对象中的属性和方法；
    //同一个类可以创建多个实例。
    public static void main1(String[] args) {
        //实例化了一个对象
        Person person = new Person();
        //person引用
        System.out.println(person);//Person{age=0, name='null', SIZE=0}
    }




    //1.奇数在数组后面

    /***
     *
     public boolean isOdd(int n){
     return (n & 1 ) == 1;
     }

     public void moveArr(int[] arr){
     if(arr == null)
     return;
     int left = 0;
     int right = arr.length - 1;
     while(left < right){
     if(isOdd(arr[left]) && !isOdd(arr[right])){
     int tmp = arr[left];
     arr[left] = arr[right];
     arr[right] = tmp;
     }
     else if(!isOdd(arr[left]) && isOdd(arr[right])){
     left ++;
     }
     else if(isOdd(arr[left]) && isOdd(arr[right])){
     right --;
     }
     else{
     left ++;
     right --;
     }
     }
     }

     public static void main1(String[] args) {
     Test test = new Test();
     int[] arr = {1,2,3,4,5,6,7,8,9,10};
     test.moveArr(arr);
     for (int i = 0; i < arr.length ; i++) {
     System.out.print(arr[i] + " ");
     }
     }

     */

}
