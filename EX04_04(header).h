#include <iostream>
#include <cmath>
using namespace std;

class Rectangle2D
{
public:
	// default rectangle
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	// specified rectangle
	Rectangle2D(double newX, double newY, double newHeight, double newWidth)
	{
		x = newX;
		y = newY;
		width = newWidth;
		height = newHeight;
	}
	// get functions 
	double getArea()
	{
		return x * y;
	}
	double getPerimeter()
	{
		return ((2 * x) + (2 * y));
	}
	// return dimensions 
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	// set a new dimmension
	void setX(double newX)
	{
		x = (newX >= 0) ? newX : 0;
	}
	void setY(double newY)
	{
		y = (newY >= 0) ? newY : 0;
	}
	void setWidth(double newWidth)
	{
		width = (newWidth >= 0) ? newWidth : 0;
	}
	void setHeight(double newHeight)
	{
		height = (newHeight >= 0) ? newHeight : 0;
	}

	// tells if it is within limits
	bool contains(double x, double y)
	{
		double xmax = x + (.5 * width);
		double xmin = x - (.5 * width);
		double ymax = y + (.5 * height);
		double ymin = y - (.5 * height);

		if (x < xmax && x > xmin && y < ymax && ymin)
		{
			return true;
		}
		else
			return false;
	}
	bool contains(const Rectangle2D &r)
	{
		double xmax = x + (.5 * width);
		double xmin = x - (.5 * width);
		double ymax = y + (.5 * height);
		double ymin = y - (.5 * height);

		double LT = (.5 * width);
		double LB = (.5 * height);
		double RT = (.5 * width);
		double RB = (.5 * height);
		if (LT < xmax && LB > xmin && RT < ymax && RB > ymin)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool overlaps(const Rectangle2D &r)
	{
		double xmax = x + (.5 * width);
		double xmin = x - (.5 * width);
		double ymax = y + (.5 * height);
		double ymin = y - (.5 * height);

		double LT = (.5 * width);
		double LB = (.5 * height);
		double RT = (.5 * width);
		double RB = (.5 * height);

		if (LT < xmax && LB > xmin && RT < ymax && RB > ymin)
		{
			return false;
		}
		else
		{
			return true;
		}

	}
private:
	double width;
	double height;
	double x;
	double y;
};
