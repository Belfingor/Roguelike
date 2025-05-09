// ©2023, XYZ School. All rights reserved.
// Authored by Aleksandr Rybalka (polterageist@gmail.com)

#include <SFML/Graphics.hpp>
//#include "Application.h"
#include "Player.h"
#include "Engine.h"
#include "ResourceSystem.h"
#include "DeveloperLevel.h"


using namespace RoguelikeGame;

int main()
{
	GameEngine::RenderSystem::Instance()->SetMainWindow(new sf::RenderWindow(sf::VideoMode(1280, 720), "RoguelikeGame"));

	GameEngine::ResourceSystem::Instance()->LoadTexture("ball", "Resources/Textures/Ball.png");

	auto developerLevel = std::make_shared<DeveloperLevel>();
	developerLevel->Start();

	GameEngine::Engine::Instance()->Run();

	return 0;
}
