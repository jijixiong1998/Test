import book.BookList;
import user.AdminUser;
import user.NormalUser;
import user.User;

import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:15:06
 */
//整个系统入口
public class Main {
    //登录
    public static User login(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入你的姓名：");
        String name = scanner.nextLine();
        System.out.println("请输入你的身份：1——》管理员    0——》普通用户");
        int choice = scanner.nextInt();
        if(choice == 1){
            return new AdminUser(name);//向上转型的使用
        }else{
            return new NormalUser(name);
        }
    }
    public static void main(String[] args) {
        //1.登录
        ///（1）此时user会引用一个对象，这个对象：可能是AdminUser 也可能是NormalUser
        User user = login();
        while(true) {
            //通过user调用相应的菜单
            //(2)会调用user引用的对象的menu方法，返回对应的选择——根据此选择调用对应的work方法；
            int choice = user.menu();//动态绑定的使用
            //（3）使用choice去调用对应类的work方法
            //这个work方法，调用谁的，怎么调用，由doOperation实现
            BookList bookList = new BookList();
            user.doOperation(choice, bookList);//根据choice去数组中查询对应的操作
        }
    }
}
