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
	
	while (1)
	{
		std::cout<<"ENTER A COMMAND(\033[1;32mSTART\033[0m)(\033[1;31mEXIT\033[0m): ...\n";
		std::getline(std::cin, main);
		if (main == "start" || main == "START"){
			gameArena.initialise();
			gameArena.gameLoop();
			gameArena.exit();
		}
		else if (main == "exit" || main == "EXIT"){
			return (0);
		}
		else
		{
			std::cout<<"Invalid command: \""<<main<<"\"\n\n";
		}
	}
	return (0);
}