// Schweinerei.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Schwein.h"


using namespace VW::tiere;
// Konsument viele
int main()
{


	
	Schwein s;
	s.set_name("Miss Piggy");

	

	std::cout << s << std::endl;
	
	s.fressen();

	
	
	std::cout << s << std::endl;
}

