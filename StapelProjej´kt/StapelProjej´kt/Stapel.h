#pragma once
#include <iostream>
namespace collections {
	/// <summary>
	/// Fachliche Dokumentation
	/// </summary>

	template<class T>
	class Stapel
	{
	private:
		size_t size;
		T *data;
		int index;
		void holeVon(const Stapel& other)
		{
			size = other.size;
			index = other.index;
			data = new int[size];
			memcpy(data, other.data, size * sizeof(int));
		}
	public:
		Stapel(int size = 10):size(size),index(0), data(new int[size])
		{
			
		}

		Stapel(const Stapel& other)
		{
			holeVon(other);

		}
		Stapel(Stapel&& other)
		{
	
			std::exchange(data, nullptr);
			std::exchange(size, 0);
			/*size = other.size;
			other.size = 0;*/
			std::exchange(index, 0);
			
		}
		

		Stapel& operator = (const Stapel& other){
			delete[] data;
			holeVon(other);
			return *this;
		}

		virtual ~Stapel()
		{
			if(data) delete[] data;
		}
		/// <summary>
		/// 
		/// </summary>
		/// <param name="value"></param>
		void push(T value)
		{
			if (is_full()) return;
			data[index++] = value;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		T pop() // Ferhlerbehandlung
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

