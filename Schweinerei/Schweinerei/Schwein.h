#pragma once
#include <ostream>
#include <string>
// Produzent einen

namespace VW {
	namespace tiere
	{

		class Schwein
		{
		private:
			// Instanzvariablen
			std::string name; 
			int gewicht;
			static int counter; // Klassenvariable  // extern
			
			void set_gewicht(const int gewicht)
			{
				if (gewicht < 10) return;
				this->gewicht = gewicht;
			}

		public:


			Schwein(std::string name = "Nobody"); // Konstruktor Initialisieren -> alle Instanzvariablen werden mit Startwerten belegt
			~Schwein();

			// statische methoden
			static int get_anzahl();
			
			// Instanzmethoden
			void fressen();

			inline void set_name(const std::string& name);

			inline int get_gewicht() const // Teilt dem Compiler mit, dass diese Funktion keine Eigenschaft der Klasse ändert.
			{
				return gewicht;
			}


			std::string get_name() const
			{
				return name;
			}


			
		};

	}
}