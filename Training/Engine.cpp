#include "Engine.h"

Engine& Engine::i()
{
	static Engine en;
	return en;
}

Engine::Engine()
{}
void Engine::run()
{

}