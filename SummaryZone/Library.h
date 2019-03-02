#pragma once
#include "Book.h"

class Library
{
private:
	std::multimap<std::string, Book> booksByTitle;
	std::multimap<std::string, Book> booksByAuthor;
public:
	void addBook(const std::string& title, const std::string& author, const std::string& link);
	void removeBook(const std::string& title, const std::string& author);
	void removeAll();
	void playBook(const std::string& title, const std::string& author) const;
	void playRandom() const;
	void showByTitle() const;
	void showByBook() const;
	Library();
	~Library();
};

