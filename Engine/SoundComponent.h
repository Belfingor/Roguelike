#pragma once
#include "Component.h"
#include "SFML/Audio.hpp"


namespace GameEngine
{
	class SoundComponent : public Component
	{
	public:
		SoundComponent (GameObject* gameObject);
		~SoundComponent();

		void Render()override;
		void Update(float deltaTime)override;
		void SetSound(sf::SoundBuffer& buffer);
		void SetVolume(float volume);
		void SetLoop(bool isToLoop);
		void Play();
		void Pause();
		void Stop();


	private:
		sf::Sound *sound;

	};


}


