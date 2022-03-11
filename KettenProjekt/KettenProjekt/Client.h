#pragma once
#include <iostream>
#include "Schwein.h"
#include "Liste.h"

using namespace std;
class Client
{
private:
	Liste<Schwein>& liste;

	Schwein * createSchwein(string name)
	{
		return new Schwein(name);
	}

	void show_menu()
	{
		cout << "0..........................Ende" << endl;
		cout << "1..........................Neues Schwein" << endl;
		cout << "2..........................Edit Schwein" << endl;
		cout << "3..........................Loesche Schwein" << endl;
		cout << "4..........................Zeige Schwein" << endl;
		cout << "5..........................Zum ersten Schwein" << endl;
		cout << "6..........................Zum letzten Schwein" << endl;
		cout << "7..........................Zum naechsten Schwein" << endl;
		cout << "8..........................Zum vorherigen Schwein" << endl;
		cout << "9..........................Status" << endl << endl;
	}

public:
	Client(Liste<Schwein>& liste)
		: liste(liste)
	{
	}

	void run()
	{
		int command = -1;
		while(command != 0)
		{
			show_menu();
			command = 0;
		}
	}
};

