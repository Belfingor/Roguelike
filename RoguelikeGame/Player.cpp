#include "Player.h"
#include <ResourceSystem.h>
#include <SpriteColliderComponent.h>

namespace RoguelikeGame
{
	Player::Player()
	{
		gameObject = GameEngine::GameWorld::Instance()->CreateGameObject("Player");
		auto playerRenderer = gameObject->AddComponent<GameEngine::SpriteRendererComponent>();

		playerRenderer->SetTexture(*GameEngine::ResourceSystem::Instance()->GetTextureShared("ball"));
		playerRenderer->SetPixelSize(32, 32);

		auto playerCamera = gameObject->AddComponent<GameEngine::CameraComponent>();
		playerCamera->SetWindow(&GameEngine::RenderSystem::Instance()->GetMainWindow());
		playerCamera->SetBaseResolution(1280, 720);

		auto playerInput = gameObject->AddComponent<GameEngine::InputComponent>();

		auto transform = gameObject->AddComponent<GameEngine::TransformComponent>();

		auto body = gameObject->AddComponent<GameEngine::RigidbodyComponent>();

		auto collider = gameObject->AddComponent<GameEngine::SpriteColliderComponent>();
	}

	GameEngine::GameObject* Player::GetGameObject()
	{
		return gameObject;
	}
}