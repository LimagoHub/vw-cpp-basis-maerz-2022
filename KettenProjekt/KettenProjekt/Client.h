#pragma once
#include <iostream>
#include "Schwein.h"
#include "Liste.h"

using namespace std;
class Client
{
private:
	Liste<Schwein>& liste;

	Schwein * createSchwein()
	{
		string name;
		cout << "Bitte geben Sie dem Schwein einen Namen:" << endl;
		cin >> name;
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
			cin >> command;
			switch(command)
			{
			case 0: exit(0);
			case 1: liste.append(createSchwein()); break;
			case 2:liste.update(createSchwein()); break; 
			case 3:liste.remove(); break;
			case 4:cout << liste.get() << endl; break;
			case 5:liste.move_first(); break;
			case 6:liste.move_last(); break;
			case 7:liste.move_next(); break;
			case 8:liste.move_previous(); break;
			case 9:cout << "Empty = " << liste.is_empty() <<", BOL = " << liste.is_bol() << ", EOL = " << liste.is_eol() << endl; break;
			default: cout << "Unbekannter Befehl." << endl;
			}
		}
	}
};

