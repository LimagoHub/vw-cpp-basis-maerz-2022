// TeemplateDemo.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
template<typename T> inline T max(T a, T b)
{
	return a > b ? a : b;
}

template<typename T>
inline void tausche(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
inline  T xyz()
{
	return nullptr;
}


int main()
{

	int *x = xyz<int*>();
	
	int a, b, c;

	a = 10;
	b = 20;

	c = max(a, b);

	double x, y,z;

	x = 1.5;
	y = 10.6;
	z = max(x, y);
	
    std::cout << c << std::endl;
}


