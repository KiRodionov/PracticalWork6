#include "Book.h"

Book::Book(string Title, string Author, string Publisher, int YearOfPublication) {
	this->Title = Title;
	this->Author = Author;
	this->Publisher = Publisher;
	this->YearOfPublication = YearOfPublication;
}

Book::Book() {
	bool correct = false;
	do {
		cout << "Enter the Title: " << endl;
		cin >> Title;
		cout << "Enter the Author: " << endl;
		cin >> Author;
		cout << "Enter the Publisher: " << endl;
		cin >> Publisher;
		cout << "Enter the Year Of Publication: " << endl;
		cin >> YearOfPublication;
		correct = true;
	} while (!correct);
}

void Book::PrintInfo() {
	cout << "Title: " << Title << endl;
	cout << "Author: " << Author << endl;
	cout << "Publisher: " << Publisher << endl;
	cout << "Year of publication: " << YearOfPublication << endl;
	cout << endl;
}

void Book::BookAuthorSearch(vector<Book>& books, string author) {
	for (int i = 0; i < books.size(); ++i) {
		if (books[i].Author == author) {
			books[i].PrintInfo();
		}
	}
};

void Book::BookTitleSearch(vector<Book>& books, string title) {
	for (int i = 0; i < books.size(); ++i) {
		if (books[i].Title == title) {
			books[i].PrintInfo();
		}
	}
};

vector<Book> Book::CreateBookList(vector<Book>& books) {
	vector<Book> booksList = vector<Book>();
	for (int i = 0;i < books.size();++i) {
		booksList.push_back(books[i]);
	}
	
	return booksList;
}

vector<Book> Book::SortBookList(vector<Book>& books) {
	vector<Book> temp = vector<Book>(books);

	for (int i = 0; i < books.size() - 1; ++i) {
		for (int j = i + 1; j < books.size(); ++j) {
			if (temp[i].YearOfPublication < temp[j].YearOfPublication) {
				Book book = temp[i];
				temp[i] = temp[j];
				temp[j] = book;
			}
		}
	}

	return temp;
}