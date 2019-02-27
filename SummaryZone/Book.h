#pragma once

class Book
{
private:
	std::string title;
	std::string author;
	std::string link;
public:
	std::string getTitle();
	std::string getAuthor();
	std::string getLink();
	Book(std::string bookTitle, std::string bookAuthor, std::string bookLink);
	Book();
	~Book();
};

