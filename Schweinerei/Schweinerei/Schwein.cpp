#include "Schwein.h"

using namespace VW::tiere;

Schwein::Schwein():name("nobody"), gewicht(10)
{
	
}

void Schwein::fressen()
{
	gewicht++;
}

void Schwein::set_name(const std::string& name)
{
	//if (name == "Elsa") return;
	this->name = name;
}
