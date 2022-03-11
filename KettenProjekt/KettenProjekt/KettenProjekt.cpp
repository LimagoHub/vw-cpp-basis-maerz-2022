// KettenProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Client.h"
#include "ListeImpl.h"
#include "Schwein.h"


int main()
{
	ListeImpl<Schwein> liste;
	Client c{ liste };
	c.run();
	
	return 0;
}

