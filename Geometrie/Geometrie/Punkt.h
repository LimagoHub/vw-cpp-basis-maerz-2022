#pragma once
#include <ostream>

class Punkt
{
	const double MAX{ 10.0 };
	double x, y;

	void set_x(double x)
	{
		if (x > MAX) x = MAX;
		if (x < -MAX) x = -MAX;
		this->x = x;
	}

	void set_y(double y)
	{
		if (y > MAX) y = MAX;
		if (y < -MAX) y = -MAX;
		this->y = y;
	}

public:

	Punkt(double x = 0.0, double y = 0.0);

	double get_x() const
	{
		return x;
	}

	double get_y() const
	{
		return y;
	}

	void rechts(double offset = 1.0); // Überladen ist gleicher Methodenname nur die Art oder Anzahl der Parameter unterscheidet sich.
	void links();
	void oben();
	void unten();


	friend std::ostream& operator<<(std::ostream& os, const Punkt& obj)
	{
		return os
			<< "x: " << obj.x
			<< " y: " << obj.y;
	}
}; 
