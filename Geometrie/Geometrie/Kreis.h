#pragma once
#include <iostream>
#include "Punkt.h"
class Kreis :  public Punkt
{
private:
	double radius;
	
public:


	

	
	Kreis(double radius = 0.0, double x = 0, double y = 0) :Punkt(x, y), radius(radius)
	{
		std::cout << "Ctor Monster Kreis" << std::endl;
	}
	Kreis(Punkt p) :Punkt(p), radius(radius)
	{
		std::cout << "Ctor Kreis" << std::endl;
	}


	
	double get_radius() const
	{
		return radius;
	}

	void set_radius(const double radius)
	{
		this->radius = radius;
	}

	std::string foo() override
	{
		return std::string{ "Hier ist foo aus Kreis" };
	}
};

