﻿// ©2023, XYZ School. All rights reserved.
// Authored by Aleksandr Rybalka (polterageist@gmail.com)

#include <SFML/Graphics.hpp>
#include "Application.h"
#include "Engine.h"


using namespace RoguelikeGame;

int main()
{
	//GameEngine::Engine::Instance()->Run();
	Application::Instance().Run();

	return 0;
}
