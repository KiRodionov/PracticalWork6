#pragma once

#include <iostream>

#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::string;

using std::vector;

class Book
{
private:
	string Title;
	string Author;
	string Publisher;
	int YearOfPublication;

public:
	Book(string Title, string Author, string Publisher, int YearOfPublication);
	Book();
	void PrintInfo();
	static void BookAuthorSearch(vector<Book>& books, string author);
	static void BookTitleSearch(vector<Book>& books, string title);
	static vector<Book> CreateBookList(vector<Book>& books);
	static vector<Book> SortBookList(vector<Book>& books);

};

