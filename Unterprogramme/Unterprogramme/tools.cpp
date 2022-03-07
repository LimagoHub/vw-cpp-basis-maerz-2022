
#include <iostream>

#include "tools.h"

static int eigentlicheRechenenFunktion(int a, int b); // Modulglobal


int addiere(int a, int b)
{
	return eigentlicheRechenenFunktion(a, b);
}
int sub(int a, int b)
{
	return eigentlicheRechenenFunktion(a,-b);
}

static int eigentlicheRechenenFunktion(int a, int b)
{
	return a + b;
}


int divide(int a, int b)
{
	return a / b;
}


int mult(int a, int b)
{
	return a * b;
}