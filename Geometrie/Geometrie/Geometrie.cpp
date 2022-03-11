// Geometrie.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Kreis.h"

class Transformer  // Interface
{
public:
	virtual std::string transform(std::string message) = 0;
};


class Simple
{
private:
	Transformer& transformer;
public:


	Simple(Transformer& transformer)
		: transformer(transformer)
	{
	}

	void ausgabe()
	{
		std::cout << transformer.transform("Hallo Welt") << std::endl;
	}
	
};

class ToUpperTransformer : public Transformer
{
public:
	std::string transform(std::string message) override
	{

		return "ToUpper";
	}
};


class ToLowerTransformer : public Transformer
{
public:
	std::string transform(std::string message) override
	{

		return "ToLower";
	}
};


int main()
{
	ToLowerTransformer tl;
	ToUpperTransformer ts;
	Simple s{ts};
	s.ausgabe();

	
	///*Punkt* p;
	//Kreis* k;

	//

	//p = new Kreis();
	//std::cout << p->foo() << std::endl;*/

	//Kreis k;

	//Punkt &p = k;

	//std::cout << (void*) &p << std::endl;
	//std::cout << (void*) &k << std::endl;
	//
	//std::cout << p.foo() << std::endl;
	//
	
}


