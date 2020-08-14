#pragma once
#include "Shop.h"

class Engine
{
public:
	Engine(const Engine& other) = delete;
	Engine& operator=(const Engine& other) = delete;
	~Engine() = default;

	static Engine& i();
	void run();

private:
	Shop s;
	Engine();
};
