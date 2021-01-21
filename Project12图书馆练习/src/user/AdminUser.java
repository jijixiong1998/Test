package user;

import operation.*;

import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:16
 */
//管理员
public class AdminUser extends  User {
    public AdminUser(String name) {
        super(name);
        this.operations = new IOperation[]{
                new ExitOPeration(),
                new FindOperation(),
                new AddOperation(),
                new DelOperation(),
                new DisplayOperation()
        };
    }

    /***
     * 返回 要执行的对应的操作
     * @return
     */
    @Override
    public int menu() {
//        System.out.println("管理员菜单显示：");
        Scanner scanner = new Scanner(System.in);
        System.out.println("*****************************");
        System.out.println("hello " + this.name + "欢迎登录图书管理系统");
        System.out.println("0.退出系统");
        System.out.println("1.查找图书");
        System.out.println("2.新增图书");
        System.out.println("3.删除图书");
        System.out.println("4.显示图书");
        System.out.println("*****************************");
        int choice = scanner.nextInt();
        return choice;//根据返回的选择，调用相对应的类
    }
}
