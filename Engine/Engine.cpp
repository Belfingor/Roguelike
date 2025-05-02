#include "pch.h"
#include "Engine.h"
#include <iostream>

Engine::Engine() {}
void Engine::Initialize()
{
	std::cout << "Engine Initialized" << std::endl;
}
void Engine::Run()
{
	std::cout << "Engine Running" << std::endl;
}