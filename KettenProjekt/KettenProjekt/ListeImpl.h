#pragma once
#include "Liste.h"


template<class T>
class Kettenglied
{
public:
	Kettenglied* vor;
	Kettenglied* nach;
	T data;


	Kettenglied(T data)
		: data(data),vor(nullptr),nach(nullptr)
	{
	}
};


template<class T>
class ListeImpl :
    public Liste<T>
{
	Kettenglied<T> *start;
	Kettenglied<T> *akt;

public:

	ListeImpl():start(nullptr), akt(nullptr)
	{
	}

	
	ListeImpl(const ListeImpl&) = delete;
	ListeImpl& operator = (const ListeImpl&) = delete;
	
	void append(T value) override
	{
		Kettenglied<T> *temp = new Kettenglied<T>(value);
		if(is_empty())
		{
			start = temp;
		} else
		{
			move_last();
			akt->nach = temp;
			temp->vor = akt;
		}
		akt = temp;
	}
	bool remove() override
	{
		return true;
	}
	void clear() override {}
	T get() override
	{
		return {};
	}
	bool update(T newvalue) override
	{
		return false;
	}
	bool move_first() override
	{
		return false;
	}
	bool move_last() override
	{
		return false;
	}
	bool move_previous() override
	{
		return false;
	}
	bool move_next() override
	{
		return false;
	}
	
	bool is_bol() override
	{
		return start == akt;
	}
	bool is_eol() override
	{
		return is_empty() || akt->nach == nullptr;
	}
	bool is_empty() override
	{
		return start == nullptr;
	}
};

