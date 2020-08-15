#include "Engine.h"

Engine& Engine::i()
{
	static Engine en;
	return en;
}
void Engine::run()
{
	Shop s;
}

Engine::Engine()
{}
Engine::~Engine()
{}