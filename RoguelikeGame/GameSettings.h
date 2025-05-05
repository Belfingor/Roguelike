#pragma once
#include <string>
#define SETTINGS GameWorld::Instance()

namespace RoguelikeGame
{

	class GameWorld
	{
	private:
		GameWorld() = default;

	public:
		static GameWorld& Instance()
		{
			static GameWorld gameWorld;
			return gameWorld;
		}

		// Resources path ----------------------------------------------------------------
		const std::string RESOURCES_PATH = "Resources/";
		const std::string TEXTURES_PATH = RESOURCES_PATH + "Textures/";
		const std::string FONTS_PATH = RESOURCES_PATH + "Fonts/";
		const std::string SOUNDS_PATH = RESOURCES_PATH + "Sounds/";
		const std::string LELEVS_CONFIG_PATH = RESOURCES_PATH + "levels.config";
		const std::string RECORDS_TABLE_PATH = RESOURCES_PATH + "Records.dat";

		// Game settings constants --------------------------------------------------------
		const unsigned int SCREEN_WIDTH = 800;
		const unsigned int SCREEN_HEIGHT = 600;
		const float TIME_PER_FRAME = 1.f / 60.f; // 60 fps

		//--------------------------------------------------------------------------------
		const int MAX_RECORDS_TABLE_SIZE_MAIN_MENU = 10;
		const int MAX_RECORDS_TABLE_SIZE_GAME_OVER = 5;

		//--------------------------------------------------------------------------------
		const std::string GAME_NAME = "RoguelikeGame";

	};
}