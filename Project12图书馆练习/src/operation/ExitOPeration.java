package operation;

import book.BookList;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:18
 */
public class ExitOPeration implements IOperation {
    @Override
    public void walk(BookList bookList) {
        System.out.println("退出系统！");
        System.exit(1);
    }
}
