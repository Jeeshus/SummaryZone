#pragma once
#include "Book.h"
class Library
{
private:
	std::multimap<std::string, Book> booksByTitle;
	std::multimap<std::string, Book> booksByAuthor;
public:
	void addBook(std::string title, std::string author, std::string link);
	void removeBook(std::string title, std::string author);
	void removeAll();
	void playBook(std::string title);
	void playRandom();
	void showByTitle();
	void showByBook();
	Library();
	~Library();
};

