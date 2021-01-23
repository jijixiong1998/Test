import java.util.Arrays;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2020 - 12 - 28
 * Time:20:25
 */
public class MyArrayList {
    private int[] elem;//默认null
    private int usedSize;//有效数据个数

    public MyArrayList(){//无参构造

        this.elem = new int[10];
    }

    public MyArrayList(int capacity){

        this.elem = new int[capacity];
    }
    //判满
    public boolean isFull(){
       if(this.usedSize == this.elem.length){
            return true;
        }
        return false;
    }

    //扩容
    public void resize(){
        this.elem = Arrays.copyOf(this.elem,2 * this.elem.length);
    }


    //1.在pos 位置新增元素
    public void add(int pos,int data){
        if(isFull()){
            //System.out.println("顺序表已满！");
            resize();
        }
        //pos位置是否合法
        if(pos < 0 || pos > this.usedSize){
            System.out.println("pos位置不合法！");
            return;
        }
        for (int i = this.usedSize - 1; i >= pos; i--) {
            this.elem[i + 1] = this.elem[i];
        }
        this.elem[pos] = data;
        this.usedSize++;
    }

    //1.1默认将元素插入到数组的最后
    public void add2(int data){
        if(isFull()){
            resize();
        }
        this.elem[this.usedSize] = data;
        this.usedSize++;
    }
    //2.判定是否包含某个元素
    public boolean contains(int toFind) {
        for (int i = 0; i < usedSize ; i++) {
            if(elem[i] == toFind){
                return true;
            }
        }
        return false;
    }
    //3. 查找某个元素对应的位置
    public int search(int toFind) {
        for (int i = 0; i < usedSize ; i++) {
            if(elem[i] == toFind){
                return i;
            }
        }
        return -1;
    }

    // 4.获取顺序表长度
    public int size() {
        int len = this.usedSize;
        return len;
    }

    // 5.获取 pos 位置的元素
    public int getPos(int pos) {
        for (int i = 0; i < usedSize ; i++) {
            if(i == pos){
                return this.elem[pos];
            }
        }
        return -1;
    }

    //6. 给 pos 位置的元素修改为 value
    public void setPos(int pos, int value) {
        if (pos < 0 || pos > this.usedSize){
            return;
        }
        this.elem[pos] = value;

    }

    //7.删除第一次出现的关键字key
    public void remove(int toRemove){
        //查找是否有元素index
        int index = search(toRemove);
        if(index == -1){
            System.out.println("未找到！");
            return;
        }
        //i = index  i< usedSize - 1
        for(int i = index;i < this.usedSize - 1;i++){
           this.elem[i] = this.elem[i + 1];
        }
        //this.usedSize - 1
        this.usedSize --;

    }

    //8. 打印顺序表
    public void display(){
        for (int i = 0; i < this.usedSize ; i++) {
            System.out.print(elem[i] + " ");
        }
        System.out.println();
    }
    //9. 清空顺序表
    public void clear(){
        this.usedSize = 0;
    }

}
