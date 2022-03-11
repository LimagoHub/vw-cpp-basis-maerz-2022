// StapelProjej´kt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Stapel.h"
#include <exception>
#include "stapel_exception.h"
using namespace collections;


int main()
{

	
	try {

		Stapel<int> myStapel;

		for (int i = 0; i < 10; ++i)
		{
			myStapel.push(i);
		}

		while (!myStapel.is_empty())
		{
			std::cout << myStapel.pop() << std::endl;
		}

		
	}
	catch (stapel_exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	catch (std::exception & ex)
	{
		std::cout << "Unbekannter Fehler:" <<  ex.what() << std::endl;
	}
	

	
	
	
}

