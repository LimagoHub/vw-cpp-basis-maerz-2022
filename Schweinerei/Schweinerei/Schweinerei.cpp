// Schweinerei.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Schwein.h"


using namespace VW::tiere;
// Konsument viele

int summe(int anzahl, int summand, ...)
{
	int result = 0;
	int* stackpointer = &summand;
	for (int i = 0; i < anzahl; ++i)
	{
		result += stackpointer[i];
	}

	return result;
}

void macheWasMitSchwein(const Schwein &&s)
{
	

	std::cout << s << std::endl;
}



int main()
{
	int x  = 10;
	int y = x;
	
	std::cout << summe(3, 30, 40, 50) << std::endl;

	
	Schwein *schwein = new Schwein("Miss Piggy");

	Schwein* ruessel = schwein;

	schwein->fressen();
	
	delete schwein;

	Schwein babe;
	babe.fressen();

	macheWasMitSchwein(std::move(babe));
}

