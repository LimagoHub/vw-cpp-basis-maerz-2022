#pragma once
#include <iostream>
namespace collections {
	/// <summary>
	/// Fachliche Dokumentation
	/// </summary>
	class Stapel
	{
	public:
		Stapel()
		{
			std::cout << "Ctor" << std::endl;
		}
		virtual ~Stapel()
		{
			std::cout << "Dtor" << std::endl;
		}
		/// <summary>
		/// 
		/// </summary>
		/// <param name="value"></param>
		void push(int value)
		{
			std::cout << "Push" << std::endl;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		int pop() // Ferhlerbehandlung
		{
			std::cout << "Pop" << std::endl;
			return 0;
		}

		bool is_empty()
		{
			std::cout << "is_empty" << std::endl;
			return true;
		}
		bool is_full()
		{
			std::cout << "is_full" << std::endl;
			return true;
		}
	};
}

