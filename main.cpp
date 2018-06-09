#include "Arena.hpp"

int main()
{
	Arena gameArena;

	gameArena.initialise();
	gameArena.gameLoop();
	gameArena.exit();

	return (0);
}