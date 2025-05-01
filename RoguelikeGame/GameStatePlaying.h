#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <vector>
#include "GameStateData.h"
#include "IObserver.h"
#include "RecordsTable.h"

#include <unordered_map>


namespace RoguelikeGame
{
	class Game;

	class GameStatePlayingData : public GameStateData, public IObserver, public std::enable_shared_from_this<GameStatePlayingData>
	{
	public:
		void Init() override;
		void HandleWindowEvent(const sf::Event& event) override;
		void Update(float timeDelta) override;
		void Draw(sf::RenderWindow& window) override;
		void Notify(std::shared_ptr<IObservable> observable) override;

	private:
		//-----------------------------------------------------------------------------
		// Resources
		sf::Font font;
		sf::SoundBuffer gameOverSoundBuffer;

		// Game data


		// UI data
		sf::Text scoreText;
		sf::Text inputHintText;
		sf::RectangleShape background;
		sf::Texture heartTexture;

		// Sounds
		sf::Sound gameOverSound;

	};
}
