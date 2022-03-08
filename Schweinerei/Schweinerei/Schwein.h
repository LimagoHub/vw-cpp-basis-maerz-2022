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

			void set_gewicht(const int gewicht)
			{
				this->gewicht = gewicht;
			}

		public:


			Schwein(); // Konstruktor Initialisieren -> alle Instanzvariablen werden mit Startwerten belegt

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


			friend std::ostream& operator<<(std::ostream& os, const Schwein& obj)
			{
				return os
					<< "Schwein: name = " << obj.name
					<< ", gewicht = " << obj.gewicht;
			}
		};

	}
}