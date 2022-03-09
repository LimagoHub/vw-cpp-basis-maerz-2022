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


std::shared_ptr<Simple> global;
auto main()->int
{
	std::shared_ptr<Simple> myPointer1{ new Simple() };

	myPointer1->ausgabe();

	std::cout << myPointer1.use_count() << std::endl; // 1

	std::shared_ptr<Simple> other = myPointer1;
	std::cout << myPointer1.use_count() << std::endl; // 2

	global = myPointer1;
	std::cout << myPointer1.use_count() << std::endl; // 3

	{
		std::shared_ptr<Simple> myPointer2 = myPointer1; 
		std::cout << myPointer1.use_count() << std::endl; // 4
	}
	std::cout << myPointer1.use_count() << std::endl; // 3
	
	std::cout << "Main ende" << std::endl;
}