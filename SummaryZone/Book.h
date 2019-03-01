#pragma once

class Book
{
private:
	std::string title;
	std::string author;
	std::string link;
public:
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getLink() const;
	Book(std::string& title, std::string& author, std::string& link);
	Book();
	~Book();
};

