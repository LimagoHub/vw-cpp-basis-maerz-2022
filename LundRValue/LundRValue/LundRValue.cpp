// LundRValue.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <memory>
//void foo(int x)
//{
//	std::cout << "VAL" << x << std::endl;
//}
class Simple
{
public :
	Simple()
{
		std::cout << "CTOR" << std::endl;

}
	~Simple()
	{
		std::cout << "DTOR" << std::endl;

	}

	void ausgabe()
{
		std::cout << "Hier ist Simple" << std::endl;
}

};

auto source()->std::unique_ptr < Simple>
{
	std::cout << "Das Auto wird gebaut" << std::endl;
	return std::unique_ptr < Simple>{new Simple()};
}

auto sink(std::unique_ptr < Simple> parameter)->void
{
	std::cout << "Das Auto wird gefahren" << std::endl;
	
}



auto main()->int
{
	std::cout << "Das Auto wird gekauft" << std::endl;
	std::unique_ptr<Simple> myPointer = source();
	std::cout << "Das Auto wurde gekauft" << std::endl;
	sink(std::move(myPointer));

	
	std::cout << "Main ende" << std::endl;
}