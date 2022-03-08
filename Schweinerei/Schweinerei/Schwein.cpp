#include "Schwein.h"
#include <iostream>
using namespace VW::tiere;

Schwein::Schwein(std::string name):name(name), gewicht(10)
{
	counter++;
}

Schwein::~Schwein()
{
	counter--;
	std::cout << "Quiiiieeeek" << std::endl;
}

int Schwein::get_anzahl()
{
	
	return Schwein::counter;
}

void Schwein::fressen()
{
	this->gewicht = this->gewicht + 1;
}

void Schwein::set_name(const std::string& name)
{
	//if (name == "Elsa") return;
	this->name = name;
}

int Schwein::counter = 0;
