#pragma once
#include "SFML/Graphics.hpp"
#include "GameStateData.h"
#include "Application.h"
#include "Game.h"
#include "Text.h"
#include "cassert"
#include <sstream>
#include "RecordsTable.h"

namespace RoguelikeGame
{
	class Game;

	class GameStateGameWon : public GameStateData
	{
	public:
		void Init() override;
		void HandleWindowEvent(const sf::Event& event) override;
		void Update(float timeDelta) override;
		void Draw(sf::RenderWindow& window) override;

	private:
		// Resources
		sf::Font font;

		float timeSinceGameOver = 0.f;
		bool wasRecoredAdded = false;

		// UI data
		sf::RectangleShape background;
		sf::Text gameWonText;
		sf::Text hintText;

	};
}