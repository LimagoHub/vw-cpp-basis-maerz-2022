// VectorDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>


int main()
{
	int feld[10];
	feld[3] = 5;

	std::vector<int> v (3, 5);

	v.push_back(100);

	int last = v.back();
	v.pop_back();

	std::cout << last << std::endl;

	
	
	for (auto &element : v)
	{
		element++;
	}
	for (auto element : v)
	{
		std::cout << element << std::endl;
	}

	
    std::cout << "Hello World!\n";
}

