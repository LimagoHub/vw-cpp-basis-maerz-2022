// Unterprogramme.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "tools.h"

struct Punkt
{
	double x;
	double y;
};


void unter(const Punkt &p) // In-Out Variable
{
	
	std::cout << p.x << "  " << p.y << std::endl;
}


void ober()
{
	Punkt a;
	a.x = 10.0;
	a.y = 20;

	unter(a);

}
int main()
{
	ober();

}


