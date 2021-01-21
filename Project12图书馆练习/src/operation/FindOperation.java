package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:18
 */
//查找图书
public class FindOperation implements  IOperation {
    @Override
    public void walk(BookList bookList) {
//        System.out.println("查找书籍！
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入你要查找的书名：");
        String name = scanner.nextLine();
        //根据用户输入的书名遍历顺序表进行查找是否存在该图书
        for (int i = 0; i < bookList.getUsedSize() ; i++) {
            Book book = bookList.getBooks(i);
            if(book.getName().equals(name)){
                System.out.println("有这本书！");
                System.out.println(book);
                return;
            }
        }
        System.out.println("没有这本书！");
    }
}
