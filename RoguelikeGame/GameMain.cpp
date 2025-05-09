// ©2023, XYZ School. All rights reserved.
// Authored by Aleksandr Rybalka (polterageist@gmail.com)

#include <SFML/Graphics.hpp>
#include "Application.h"
#include "Engine.h"
#include "Windows.h"
#include <iostream>


using namespace RoguelikeGame;

int main()
{
	if (AllocConsole()) // redirecting output to console
	{
		FILE* fp;
		freopen_s(&fp, "conout$", "w", stdout); // stdout to console
		freopen_s(&fp, "conout$", "w", stderr); // stderr to console
	}
	else
	{
		std::cerr << "allocconsole failed" << std::endl;
	}

	Engine engine;
	engine.Initialize();
	engine.Run();

	Application::Instance().Run();

	return 0;
}
