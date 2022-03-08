// ArrayDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

int main()
{
	double a = 1000; // Skalar

	double* ptr; // bei der Declaration ändert es den typ
	ptr = &a;

	
	
	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(ptr) << std::endl;
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl; // Dereferenzierung

	double feld[10]; // Array
	feld[0] = 10.0;
	feld[1] = 20.0;

	ptr = feld;
	std::cout << *ptr << std::endl;
	std::cout << *feld << std::endl; //adresse von feld + klammer * sizeof(type)
	std::cout << ptr[0] << std::endl;
	std::cout << feld[0] << std::endl;

	std::cout << sizeof(feld) << std::endl;
	std::cout << sizeof(ptr) << std::endl;

	std::cout << feld[1] << std::endl;
	std::cout << *(ptr + 1) << std::endl; // adresse von feld + klammer * sizeof(type)
	
    std::cout << "Hello World!\n";
}

