#include "Engine.h"
#include <fstream>

Engine& Engine::i()
{
	static Engine en;
	return en;
}
void Engine::run()
{
	Shop s;
	std::string str = "Shop1.txt";
	//std::cin >> str;
	s.Read_products(str);
	s.Sort();
	s.Print_products();
}

Engine::Engine()
{}
Engine::~Engine()
{}