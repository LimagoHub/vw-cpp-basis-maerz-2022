// Schweinerei.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Schwein.h"


using namespace VW::tiere;
// Konsument viele


int counter = 0;
int main()
{
	std::cout << "Anzahl Schweine = " << Schwein::get_anzahl() << std::endl;
	
	Schwein s{ "Miss Piggy" };
	std::cout << "Anzahl Schweine = " << Schwein::get_anzahl() << std::endl;
	{
		Schwein b{ "Babe" };
		std::cout << "Anzahl Schweine = " << Schwein::get_anzahl() << std::endl;
	}
	std::cout << "Anzahl Schweine = " << Schwein::get_anzahl() << std::endl;
	
	std::cout << s << std::endl;

	s.fressen();



	std::cout << s << std::endl;

	std::cout << "Main Ende" << std::endl;
}

