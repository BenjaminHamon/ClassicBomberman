#pragma once

namespace Bomberman
{
	/// <summary>
	/// Simple rectangle class to store a rectangle-shaped area.
	/// </sumary>
	class Rectangle
	{
	public:
		Rectangle(int x, int y, int width, int height);
		~Rectangle(void);

	public:
		int X;
		int Y;
		int Width;
		int Height;

	public:
		// Methods to get the rectangle edges.
		inline int Top() const { return Y; }
		inline int Right() const { return X + Width; }
		inline int Bottom() const { return Y + Height; }
		inline int Left() const { return X; }

	public:
		/// <summary>
		/// Tests wether the intersection between two rectangles is empty or not.
		/// </summary>
		bool Intersect(const Rectangle& other) const;
	};
}