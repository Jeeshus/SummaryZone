#include "pch.h"
#include "Library.h"

int main()
{
	Library library;
	std::cout << "Welcome to the Summary Zone!" << std::endl;
	std::cout << "Use the 'info' command to learn more!" << std::endl;

	do
	{
		std::string title, author, link, command;

		std::cout << ">>";
		std::getline(std::cin, command);
		std::transform(command.begin(), command.end(), command.begin(), ::toupper);
		command.erase(remove(command.begin(), command.end(), ' '), command.end());
		
		if (command == "ADD")
		{
			std::cout << "Title: ";
			std::getline(std::cin, title);
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::getline(std::cin, author);
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);

			std::cout << "Link: ";
			std::getline(std::cin, link);

			library.addBook(title, author, link);
		}
		else if (command == "REMOVE")
		{
			std::cout << "Title: ";
			std::getline(std::cin, title);
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::getline(std::cin, author);
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);

			library.removeBook(title, author);
		}
		else if (command == "REMOVEALL")
		{
			library.removeAll();
		}
		else if (command == "PLAY")
		{
			std::cout << "Title: ";
			std::getline(std::cin, title);
			std::transform(title.begin(), title.end(), title.begin(), ::toupper);

			std::cout << "Author: ";
			std::getline(std::cin, author);
			std::transform(author.begin(), author.end(), author.begin(), ::toupper);

			library.playBook(title, author);
		}
		else if (command == "RANDOM")
		{
			library.playRandom();
		}
		else if (command == "INFO")
		{

		}
		else if (command == "EXIT")
		{
			std::cout << "Thank you for using Summary Zone!" << std::endl;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	} while (false);
	system("pause");
}
