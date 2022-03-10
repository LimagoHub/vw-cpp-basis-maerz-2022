// StapelProjej´kt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Stapel.h"
#include <exception>

using namespace collections;


int main()
{

	
	
	
	Stapel myStapel(10);

	for (int i = 0; i < 3; ++i)
	{
		myStapel.push(i);
	}

	Stapel jack_sparrow = std::move(myStapel);

	std::cout << "MyStapel is_full " << myStapel.is_full() << ", is_empty " << myStapel.is_empty() << std::endl;
	std::cout << "Jack is_full " << jack_sparrow.is_full() << ", is_empty " << jack_sparrow.is_empty() << std::endl;

	
}

