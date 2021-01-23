/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 28
 * Time:20:25
 * 顺序表和链表
 */
public class Test {
    public static void main(String[] args) {
        MyArrayList myArrayList = new MyArrayList();

        myArrayList.add(0,10);
        myArrayList.add(1,20);
        myArrayList.add(2,30);
        myArrayList.add(3,40);
        myArrayList.add(4,50);
        myArrayList.add(5,10);
        myArrayList.display();

        myArrayList.add2(60);
        myArrayList.add2(70);
        myArrayList.display();

        //3. 查找某个元素对应的位置
        System.out.println(myArrayList.search(50));

        // 1.判定是否包含某个元素
        System.out.println(myArrayList.contains(50));

        // 4.获取顺序表长度
        System.out.println(myArrayList.size());

        // 5.获取 pos 位置的元素
        System.out.println(myArrayList.getPos(0));
        System.out.println(myArrayList.getPos(100));

        //6. 给 pos 位置的元素修改为 value
        myArrayList.setPos(2,3);
        myArrayList.display();

        //7.删除第一次出现的关键字key
        myArrayList.remove(10);
        myArrayList.display();

        //8. 打印顺序表
       myArrayList.display();

        //9. 清空顺序表
        myArrayList.display();
        myArrayList.clear();
        myArrayList.display();


    }
}
