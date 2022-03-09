// StapelProjej´kt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#include "Stapel.h"
using namespace collections;




int main()
{


	

	Stapel myStapel(10);
	//Stapel myStapel = 10;
	// Stapel myStapel{ 10 };
	for (int i = 0; i < 5; ++i)
	{
		if(! myStapel.is_full())
		{
			myStapel.push(i);
		}
	}

	Stapel other{ myStapel };
	// Stapel other = myStapel;

	
	
	while(! myStapel.is_empty())
	{
		std::cout << myStapel.pop() << std::endl;
	}
	// std::cout << other.pop() << std::endl;
	
    std::cout << "Hello World!\n";
}

