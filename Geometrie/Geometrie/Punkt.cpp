#include "Punkt.h"

Punkt::Punkt(double x, double y)
{
	set_x(x);
	set_y(y);
}

Punkt & Punkt::rechts(double offset)
{
	set_x(get_x() + offset);
	return *this;
}



Punkt& Punkt::links()
{
	set_x(get_x() - 1.0);
	return *this;
}

void Punkt::oben()
{
	set_y(get_y() + 1.0);
}

void Punkt::unten()
{
	set_y(get_y() - 1.0);
}

