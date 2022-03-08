// Geometrie.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
int main()
{
    Punkt p{ 5.0};

    for (int i = 0; i < 11; ++i)
    {
        p.rechts(1.5);
        std::cout << p << std::endl;
    }
	
}


