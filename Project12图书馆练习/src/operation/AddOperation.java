package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:17
 */
public class AddOperation implements  IOperation{
    @Override
    public void walk(BookList bookList) {
        System.out.println("添加书籍");
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入图书的名字：");
        String name = scanner.nextLine();
        System.out.println("请输入图书的作者：");
        String author = scanner.nextLine();
        System.out.println("请输入图书的价格：");
        int price = scanner.nextInt();
        System.out.println("请输入图书的类型：");
        String type = scanner.next();

        Book book = new Book(name,author,price,type);

        //将此本书加入当前顺序表的最后——即尾插法
        int currentSize = bookList.getUsedSize();
        bookList.setBooks(currentSize,book);
        //出入书籍后，更新usedSize的值
        bookList.setUsedSize(currentSize + 1);
    }
}
