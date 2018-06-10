#include "Arena.hpp"

int main()
{
	std::string main;
	Arena gameArena;
	std::cout<<"\033[1;32m _______  _______  _______  ___   ___                                 \n\
|   _   ||       ||       ||   | |   |                                \n\
|  |_|  ||  _____||       ||   | |   |                                \n\
|       || |_____ |       ||   | |   |                                \n\
|       ||_____  ||      _||   | |   |                                \n\
|   _   | _____| ||     |_ |   | |   |                                \n\
|__| |__||_______||_______||___| |___|                                \n\
 ___   __    _  __   __  _______  ______   _______  ______    _______ \n\
|   | |  |  | ||  | |  ||   _   ||      | |       ||    _ |  |       |\n\
|   | |   |_| ||  |_|  ||  |_|  ||  _    ||    ___||   | ||  |  _____|\n\
|   | |       ||       ||       || | |   ||   |___ |   |_||_ | |_____ \n\
|   | |  _    ||       ||       || |_|   ||    ___||    __  ||_____  |\n\
|   | | | |   | |     | |   _   ||       ||   |___ |   |  | | _____| |\n\
|___| |_|  |__|  |___|  |__| |__||______| |_______||___|  |_||_______|\033[0m\n";
	
	std::cout<<"PRESS <ENTER> TO BEGIN: ...";
	std::getline(std::cin, main);
	gameArena.initialise();
	gameArena.gameLoop();
	gameArena.exit();

	return (0);
}