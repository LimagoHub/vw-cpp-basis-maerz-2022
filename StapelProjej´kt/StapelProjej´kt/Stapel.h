#pragma once
#include <iostream>
namespace collections {
	/// <summary>
	/// Fachliche Dokumentation
	/// </summary>
	class Stapel
	{
	private:
		static const int SIZE{ 10 };
		int data[SIZE];
		int index;
	public:
		Stapel():index(0)
		{
			
		}
		virtual ~Stapel()
		{
			
		}
		/// <summary>
		/// 
		/// </summary>
		/// <param name="value"></param>
		void push(int value)
		{
			if (is_full()) return;
			data[index++] = value;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		int pop() // Ferhlerbehandlung
		{
			if(is_empty())return 0;
			return data[--index];
		}

		bool is_empty()
		{
			
			return index <= 0;
		}
		bool is_full()
		{
			
			return index >= SIZE;
		}
	};
}

