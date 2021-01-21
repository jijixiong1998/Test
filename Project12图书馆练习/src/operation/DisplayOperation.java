package operation;

import book.Book;
import book.BookList;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:17
 */
public class DisplayOperation implements IOperation {
    @Override
    public void walk(BookList bookList) {
        System.out.println("展示图书！");
        for (int i = 0; i < bookList.getUsedSize() ; i++) {
            Book book = bookList.getBooks(i);
            System.out.println(book);
        }
    }
}
