#include "pch.h"
#include "Book.h"

std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

std::string Book::getLink()
{
	return link;
}

Book::Book(std::string bookTitle, std::string bookAuthor, std::string bookLink)
{
	title = bookTitle;
	author = bookAuthor;
	link = bookLink;
}

Book::Book()
{
}

Book::~Book()
{
}
