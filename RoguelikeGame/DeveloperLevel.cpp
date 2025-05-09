#include "DeveloperLevel.h"

using namespace GameEngine;

namespace RoguelikeGame
{
	void DeveloperLevel::Start()
	{
		player = std::make_shared<Player>();
	}
	void DeveloperLevel::Restart()
	{
		Stop();
		Start();
	}
	void DeveloperLevel::Stop()
	{
		GameEngine::GameWorld::Instance()->Clear(); //Currently trying to access wrong GameWorld which is based in GameSettings.h so need to specify namespace
	}
}