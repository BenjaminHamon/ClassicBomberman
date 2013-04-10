#include <Bomberman/Src/GameObjects/ExplosionPart.h>

namespace Bomberman
{
	ExplosionPart::ExplosionPart(AnimatedSprite* sprite, int xPosition, int yPosition, int life)
		: GameObject(Rectangle(xPosition, yPosition, 48, 48), life),
		  graphics_(sprite, 2)
	{
	}

	ExplosionPart::~ExplosionPart(void)
	{
	}

	void ExplosionPart::Update(std::list<GameObject*>& objects_, std::list<Bomb>& bombs, std::list<Item>& items)
	{

	}

	void ExplosionPart::Render(GraphicsManager& graphicsManager)
	{
		graphics_.Render(graphicsManager, position_.X, position_.Y);
	}
}
