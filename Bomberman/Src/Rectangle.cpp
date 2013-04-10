#include <Bomberman/Src/Rectangle.h>

namespace Bomberman
{
	Rectangle::Rectangle(int x, int y, int width, int height)
		: X(x), Y(y), Width(width), Height(height)
	{
	}

	Rectangle::~Rectangle(void)
	{
	}

	bool Rectangle::Intersect(const Rectangle& other) const
	{
		return (Left() < other.Right())
			&& (Right() > other.Left())
			&& (Top() < other.Bottom())
			&& (Bottom() > other.Top());
	}
}