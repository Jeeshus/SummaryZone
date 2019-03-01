#include "pch.h"
#include "Book.h"

std::string Book::getTitle() const
{
	return title;
}

std::string Book::getAuthor() const
{
	return author;
}

std::string Book::getLink() const
{
	return link;
}

Book::Book(std::string& title, std::string& author, std::string& link)
{
	this->title = title;
	this->author = author;
	this->link = link;
}

Book::Book()
{
}

Book::~Book()
{
}
