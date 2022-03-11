#pragma once
#include <ostream>
#include <string>

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

	Punkt& rechts(double offset = 1.0); // Überladen ist gleicher Methodenname nur die Art oder Anzahl der Parameter unterscheidet sich.
	Punkt &  links();
	void oben();
	void unten();

	Punkt& operator ++()  // Prefix
	{
		rechts();
		oben();
		return *this;
	}

	Punkt operator ++(int dummy) // Postfix
	{
		Punkt temp{ *this };
		++* this;
		return temp;
	}

	Punkt & operator *= (double skalar)
	{
		set_x(get_x() * skalar);
		set_y(get_y() * skalar);
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& peter, const Punkt& p)
	{
		
		return peter
			<< "x: " << p.get_x()
			<< " y: " << p.get_y();
	}

	friend Punkt operator + (const Punkt& a, const Punkt& b)
	{
		return Punkt{ a.x + b.x, a.y + b.y };
	}


	virtual std::string foo()
	{
		return std::string{ "Hier ist foo aus Punkt" };
	}
}; 
