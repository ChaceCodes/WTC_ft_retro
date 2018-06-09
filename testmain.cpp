#include "GameObject.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <string>
#include <iostream>

int main() {
	Player testplr;
	Enemy	testEn;

	std::cout << testplr.getPosX() << std::endl;
	std::cout << testEn.getPosY() << std::endl;
	return (0);
}