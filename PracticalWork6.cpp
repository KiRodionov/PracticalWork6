#include "Book.h"




int main()
{
    Book book1 = Book("Title1","Author1","Publisher", 1987);
    Book book2 = Book("Title2","Author1","Publisher", 1920);
    Book book3 = Book("Title1","Author2","Publisher", 2000);
    Book book4 = Book("Title2","Author2","Publisher", 1995);
    
    vector<Book> arr = vector<Book>{ book1, book2, book3, book4 };
    vector<Book> books = Book::CreateBookList(arr);

    cout << "Search book by Author:" << endl;
    Book::BookAuthorSearch(books, "Author1");

    cout << "Search book by title:" << endl;
    Book::BookTitleSearch(books, "Title1");

    cout << "Sort Books List:" << endl;
    vector<Book> sorted = Book::SortBookList(books);

    for (int i = 0; i < sorted.size(); ++i) {
        sorted[i].PrintInfo();
    }

}