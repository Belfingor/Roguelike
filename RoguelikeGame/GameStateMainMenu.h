#pragma once
#include "SFML/Graphics.hpp"
#include "Menu.h"
#include "GameStateData.h"

namespace RoguelikeGame
{
	class Game;

	class GameStateMainMenuData : public GameStateData
	{
	public:
		void Init() override;
		void HandleWindowEvent(const sf::Event& event) override;
		void Update(float timeDelta) override;
		void Draw(sf::RenderWindow& window) override;

	private:
		sf::Font font;
		Menu menu;
	};
}
