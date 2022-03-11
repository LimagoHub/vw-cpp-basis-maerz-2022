#pragma once
#include <iostream>
#include <vector>
#include "stapel_exception.h"
namespace collections {
	/// <summary>
	/// Fachliche Dokumentation
	/// </summary>

	template<class T>
	class Stapel
	{
	private:
		size_t size;
		std::vector<T> data;
		int index;
		
	public:
		Stapel(size_t size = 10):size(size),index(0)
		{
			
		}
		Stapel(const Stapel&) = default;

		Stapel<T>& operator = (const Stapel&) = default;
		
		Stapel(Stapel&& other) noexcept
		{
		
			data = std::move(other.data);
			std::exchange(other.size, 0);
			std::exchange(other.index, 0);
		 	
		}
		

		

		
		/// <summary>
		/// 
		/// </summary>
		/// <param name="value"></param>
		/// <exception cref="stapel_exception">echt böser fehler</exception>
		void push(T value) 
		{
			if (is_full()) throw stapel_exception{"overflow"};
			
			data.emplace_back(value);
			index++;
		
		}

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		T pop() // Ferhlerbehandlung
		{
			if(is_empty())throw stapel_exception{ "underflow" };
			index--;
			T result = data.back();
			data.pop_back();
			return result;
		}

		bool is_empty() noexcept
		{
			
			return data.empty();
		}
		bool is_full() noexcept
		{
			
			return index >= size;
		}
	};
}

