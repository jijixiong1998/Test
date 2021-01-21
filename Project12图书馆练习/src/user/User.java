package user;

import book.BookList;
import com.sun.xml.internal.ws.policy.privateutil.PolicyUtils;
import operation.IOperation;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:16
 */
public abstract class User {
    public String name;
    public IOperation[] operations;

    public User(String name) {
        this.name = name;
    }

    //菜单的显示——没有进行具体的实现，将其设计成抽象方法——对应的类为抽象类
    public abstract int menu();

    //调用操作——看这个数组当中存了哪些操作；
    public void doOperation(int choice, BookList bookList){
        this.operations[choice].walk(bookList);
    }
}
