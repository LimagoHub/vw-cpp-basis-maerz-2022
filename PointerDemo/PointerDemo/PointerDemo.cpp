// PointerDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int stringlenght(const char *source)
{
	return 0;
}

int main()
{
	char buffer[] = "Hallo";

	int laenge = stringlenght(buffer);
	
	std::cout << laenge << std::endl;
	std::cout << buffer << std::endl;
}

