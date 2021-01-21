package operation;

import book.BookList;
import book.Book;

import java.util.Scanner;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:17
 */
public class DelOperation implements IOperation {
    @Override
    public void walk(BookList bookList) {
        System.out.println("删除书籍！");
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入要删除的图书名：");
        String  name = scanner.nextLine();
        int i = 0;
        for (; i < bookList.getUsedSize() ; i++) {
            Book book = bookList.getBooks(i);
            if(book.getName().equals(name)){
                break;
            }
        }

        if(i >= bookList.getUsedSize()){
            System.out.println("没有要删除的这本书！");
            return;
        }
        int pos = i;
        for(int j = pos;j < bookList.getUsedSize() - 1;j++){
            Book book = bookList.getBooks(j + 1);
            bookList.setBooks(j,book);
        }
        int currentSize = bookList.getUsedSize();
        bookList.setUsedSize(currentSize - 1);
        System.out.println("删除书籍成功！");
    }
}
