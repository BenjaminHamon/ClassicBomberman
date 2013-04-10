#include <Bomberman/Src/GameObjects/Obstacle.h>

#include <Bomberman/Src/GameObjects/Map.h>
#include <Bomberman/Src/Graphics/AssetManager.h>
#include <Bomberman/Src/Rectangle.h>

namespace Bomberman
{
	Obstacle::Obstacle(const AssetManager& assets, int xPosition, int yPosition)
		: GameObject(Rectangle(xPosition, yPosition, Map::CellWidth, Map::CellHeight), 1),
		  graphics_(assets.GetStone())
	{
	}

	Obstacle::~Obstacle(void)
	{
	}

	void Obstacle::Render(GraphicsManager& graphicsManager)
	{
		graphics_.Render(graphicsManager, position_.X, position_.Y);
	}
}