#pragma once
#include <iostream>
namespace collections {
	/// <summary>
	/// Fachliche Dokumentation
	/// </summary>
	class Stapel
	{
	private:
		size_t size;
		int *data;
		int index;
	public:
		Stapel(int size = 10):size(size),index(0), data(new int[size])
		{
			
		}

		Stapel(const Stapel& other)
			:size(other.size),
			index(other.index),
			data(new int[other.size])
		{
			memcpy(data, other.data, size * sizeof(int));

		}

		//Stapel& operator = (const Stapel& other) = delete;

		virtual ~Stapel()
		{
			delete[] data;
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
			
			return index >= size;
		}
	};
}

