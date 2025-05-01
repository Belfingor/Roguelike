#pragma once
#include <SFML/Graphics.hpp>
#include <cassert>
#include "GameSettings.h"
#include "Sprite.h"
#include "Math.h"
#include "GameObject.h"
#include "iCollidable.h"
#include "randomizer.h"
#include "IObserver.h"

namespace RoguelikeGame
{
	class Ball : public GameObject, public iCollidable, public IObservable
	{
	public:
		Ball(const sf::Vector2f& position, const sf::Vector2f& direction = sf::Vector2f(0, 1));
		virtual ~Ball() = default;
		virtual void Update(float timeDelta) override;
		//--------------------------------------------------------------------------------
		void InvertDirectionX();
		void InvertDirectionY();
		void ChangeAngle(float angle);
		sf::Vector2f GetDirection() const;

		//--------------------------------------------------------------------------------
		bool GetCollision(std::shared_ptr<iCollidable> collidable) const override;
		void restart() override;
		void SetBallSpeed(float speed);

	public:
		int playersLives = SETTINGS.PLAYER_LIVES;

	private:
		sf::Vector2f direction;
		void OnHit();
		float lastAngle = 90.f;
		float ballSpeed;
	};


	class FireBallDecorator final : public Ball
	{
	protected:
		std::shared_ptr<Ball> decoratedBall;
	public:
		FireBallDecorator(std::shared_ptr<Ball> ball);
	};

}