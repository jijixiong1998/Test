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
public class BorrowOperation implements IOperation{
    @Override
    public void walk(BookList bookList) {
        System.out.println("借阅图书！");
        //找到此本书
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入要借阅的图书名：");
        String  name = scanner.nextLine();

        for (int i = 0; i < bookList.getUsedSize(); i++) {
            Book book = bookList.getBooks(i);
            if(book.getName().equals(name)){
                //说明找到了此本书——将其状态改为true——即借阅状态
                book.setStatus(true);
                System.out.println(book);
                return;
            }
        }
        System.out.println("没有你要借阅的这本书！");
    }
}
