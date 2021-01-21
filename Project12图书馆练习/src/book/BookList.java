package book;

/**
 * Created with IntelliJ IDEA.
 * Description:
 * User:咭咭熊
 * Date:2021 - 01 - 18
 * Time:10:17
 */
//书架——使用顺序表存书
public class BookList {
    private Book[] books;
    private int usedSize;

    public int getUsedSize() {
        return usedSize;
    }

    public void setUsedSize(int usedSize) {
        this.usedSize = usedSize;
    }

    public BookList() {
        this.books = new Book[10];
        books[0] = new Book("三国演义","罗贯中",12,"小说");
        books[1] = new Book("西游记","吴承恩",22,"小说");
        books[2] = new Book("水浒传","施耐庵",25,"小说");
        this.usedSize = 3;
    }


    //增加书——尾插法
    public void setBooks(int pos,Book book){
        this.books[pos] = book;
    }

    public Book getBooks(int pos) {
        return this.books[pos];
    }



}
