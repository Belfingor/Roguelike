#pragma once
#include "Brick.h"

#include <vector>
#include <string>
#include <memory>
#include <map>




namespace RoguelikeGame
{
	enum class BrickType
	{
		Simple,
		MultiHit,
		Unbreackable,
		Glass
	};

	struct Level
	{
		std::vector<std::pair<sf::Vector2i, BrickType>> m_bricks;
	};

	class LevelLoader final
	{
	public:
		LevelLoader() { LoadLevelsFromFile(); };
		Level& GetLevel(int i);
		~LevelLoader() = default;
		int GetLevelCount();


	private:
		void LoadLevelsFromFile();
		static BrickType CharToBrickType(char symbol);
		std::vector<Level> levels;
	};
}