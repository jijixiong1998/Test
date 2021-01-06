/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 30
 * Time:21:06
 */
class Node{
    public int data;
    public Node next;

    public Node(){

    }

    public  Node(int data){
        this.data = data;
    }
}
public class MyLinkedList{
    public Node head;//表示当前链表的头，其值默认为null

    //1.创建链表
    public void createLinked(){
        this.head = new Node(10);
        Node node2 = new Node(20);
        Node node3 = new Node(30);
        Node node4 = new Node(40);
        this.head.next= node2;
        node2.next = node3;
        node3.next = node4;
    }

    //2.

    //3.通过遍历，打印链表的每一个元素
    public void display(){
        Node cur = this.head;
        while(cur != null){
            System.out.print(cur.data + " ");
            cur = cur.next;
        }
        System.out.println();
    }


    //4.通过遍历，找到链表的最后一个节点
    public Node findLastNode(){
        if(this.head == null){
            System.out.println("head == null");
            return null;
        }
        Node cur = this.head;
        while(cur.next != null){
            cur = cur.next;
        }
        return cur;
    }


    //5.通过遍历，找到链表的倒数第二个节点
    public Node findLastTwo(){
        if(this.head == null){
            System.out.println("一个节点也没有！");
            return null;
        }
        if(this.head.next == null){
            System.out.println("只有一个节点！");
            return null;
        }
        Node cur = this.head;
        while(cur.next.next != null){
            cur = cur.next;
        }
        return cur;
    }


    //6.通过遍历，找到链表的第n个节点（链表的长度 >= n）
    public Node findN(int n){
        if(this.head == null){
            System.out.println("此链表为空！");
            return null;
        }
        if(n <= 0){
            System.out.println("输入的n太小了！");
            return null;
        }
        if(n > size()){
            System.out.println("输入的n超过了链表的长度了！");
            return null;
        }
        int count = 1;
        Node cur = this.head;
        while(count != n){
            count++;
            cur = cur.next;
        }
        return cur;
    }
    //7.通过遍历，计算链表元素的个数
    public int size(){
        Node cur = this.head;
        int count = 0;//计数
        while(cur != null){
            count++;
            cur = cur.next;
        }
        return count;
    }
    //8.通过遍历，找到链表中是否包含某个元素
    public boolean contains(int key){
        Node cur = this.head;
        while(cur != null){
            if(cur.data == key){
                return true;
            }
        }
        return false;
    }


    //9.头插法
    public void addFirst(int data){
        //0.创建节点
        Node node = new Node(data);
        //1.判断链表是否为空
        if(this.head == null){
           this.head = node;
        }else{
            //2.插入节点
            node.next = this.head;
            this.head = node;
        }
    }

    //10.尾插法
    public void addLast(int data){
        //0.创建节点
        Node node = new Node(data);
        if(this.head == null){
            this.head = node;
        }else{
            //1. cur 找尾巴
            Node cur = this.head;
            while(cur.next != null){
                cur = cur.next;
            }
            //2.插入
            cur.next = node;
        }
    }

    //11.任意位置插入,第一个数据节点为0号下标
    public void addIndex(int index,int data) {
        if(index < 0 || index > size()){
            System.out.println("index位置不合法！");
            return;
        }
        //头插法
        if(index == 0){
            addFirst(data);
            return;
        }
        //尾插法
        if(index == size()){
            addLast(data);
            return;
        }
        //cur保存的是index- 1位置的节点的引用
        Node cur = moveIndex(index);
        Node node = new Node(data);
        node.next = cur.next;
        cur.next = node;
    }

    /***
     * 该函数的功能是找到index - 1位置的节点的引用
     * @param index
     * @return
     */
    public Node moveIndex(int index){
        Node cur = this.head;
        int count = 0;
        while (count != index - 1){
            cur = cur.next;
            count++;
        }
        return cur;
    }






    //12.删除第一次出现关键字为key的节点
    public void remove(int key) {
        if(this.head == null){
            System.out.println("没有节点！");
        }

        if(this.head.data == key){//删除头结点
            this.head = this.head.next;
            return;
        }
        Node prev = searchPrev(key);
        if(prev == null){
            System.out.println("没有这个可以的前驱！");
        }
        else{
            Node del = prev.next;
            prev.next = del.next;
        }

    }

    /***
     * 此函数的作用找到要删除节点的前驱
     * @param key
     * @return
     */
    public Node searchPrev(int key){
       Node cur = this.head;
       while(cur.next != null){
           if(cur.next.data == key){
               return cur;//返回要删除节点的前驱
           }
           cur = cur.next;
       }
       return null;

    }

    //13.删除所有值为key的节点
    public void removeAllKey(int key){
        if(this.head == null){
            return;
        }
        Node curHead = this.head;
        Node prev = this.head;
        Node cur = this.head.next;
        while(cur != null){
            if(cur.data == key){
                prev.next = cur.next;
                cur = cur.next;
            }else{
                prev = cur;
                cur = cur.next;
            }
        }
        //在最后判断头结点是否是要删除的key
        if(this.head.data == key){
            this.head = this.head.next;
        }
    }

    //14.清空
    public void clear(){
        this.head = null;
    }

    //15.反转链表
}