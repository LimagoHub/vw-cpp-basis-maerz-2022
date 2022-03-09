// Geometrie.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
int main()
{
    Punkt p{ 0.5, 0.5};
    Punkt p2{ 1, 1 };

    
	
    Punkt p3 = p + p2 ;

  
	
    //std::cout << p++ << std::endl;

   
	
    std::cout << p << " " << p2 << std::endl;

    std::cout << p3 << std::endl;
}


