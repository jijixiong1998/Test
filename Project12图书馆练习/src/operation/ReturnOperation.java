package operation;

import book.BookList;
import book.Book;
import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:18
 */
public class ReturnOperation implements  IOperation{
    @Override
    public void walk(BookList bookList) {
        System.out.println("归还书籍！");
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入要归还的书名：");
        String name = scanner.nextLine();

        for (int i = 0; i < bookList.getUsedSize() ; i++) {
            Book book = bookList.getBooks(i);
            if(book.getName().equals(name)){
                book.setStatus(false);
                System.out.println(book);
                return;
            }
        }
        System.out.println("没有要归还的图书！");
    }
}
