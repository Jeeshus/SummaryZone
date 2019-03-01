#include "pch.h"
#include "Library.h"

int main()
{
	Library library;
	std::cout << "Welcome to Summary Zone!" << std::endl;
	std::cout << "Use the 'info' command to learn more!" << std::endl;

	do
	{
		std::string title, author, link, command;

		std::cout << ">>>";
		std::cin >> command;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::transform(command.begin(), command.end(), command.begin(), ::toupper);
		
		if (command == "ADD")
		{
			std::cout << "Title: ";
			std::cin >> title;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::cin >> author;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);

			std::cout << "Link: ";
			std::cin >> link;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			library.addBook(title, author, link);
		}
		else if (command == "REMOVE")
		{
			std::cout << "Title: ";
			std::cin >> title;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::cin >> author;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);

			std::cout << "Link: ";
			std::cin >> link;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			library.removeBook(title, author)
		}
		else if (command == "PLAY")
		{
			std::cout << "Title: ";
			std::cin >> title;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::cin >> author;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);
		}
		else if (command == "INFO")
		{

		}
		else
		{

		}
	} while (false);
	system("pause");
}
