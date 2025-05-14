#include "pch.h"
#include "SoundComponent.h"

GameEngine::SoundComponent::SoundComponent(GameObject* gameObject) : Component(gameObject)
{
	sound = new sf::Sound();
}

GameEngine::SoundComponent::~SoundComponent()
{
	sound->stop();
	delete sound;
}

void GameEngine::SoundComponent::Render() {}

void GameEngine::SoundComponent::Update(float deltaTime) {}

void GameEngine::SoundComponent::SetSound(sf::SoundBuffer& buffer)
{
	sound->setBuffer(buffer);
}

void GameEngine::SoundComponent::SetVolume(float volume)
{
	sound->setVolume(volume);
}

void GameEngine::SoundComponent::SetLoop(bool isToLoop)
{
	sound->setLoop(isToLoop);
}

void GameEngine::SoundComponent::Play()
{
	if (sound->getStatus() != sf::SoundSource::Status::Playing)
	{
		sound->play();
	}
}

void GameEngine::SoundComponent::Pause()
{
	sound->pause();
}

void GameEngine::SoundComponent::Stop()
{
	sound->stop();
}
