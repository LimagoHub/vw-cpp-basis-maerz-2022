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

	virtual ~ListeImpl()
	{
		clear();
	}
	ListeImpl(const ListeImpl&) = delete;
	ListeImpl& operator = (const ListeImpl&) = delete;

	void clear() override
	{
		while (remove());
	}

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
		if(is_empty()) return false;

		if(is_bol() && is_eol())
		{
			delete start;
			start = akt = nullptr;
			return true;
		}

		if(is_bol())
		{
			move_next();
			delete start;
			start = akt;
			return true;
		}

		if(is_eol())
		{
			move_previous();
			delete akt->nach;
			akt->nach = nullptr;
			return true;
		}

		auto toDelete = akt;

		akt->vor->nach = akt->nach;
		akt->nach->vor = akt->vor;
		move_next();
		
		delete toDelete;
		return true;
	}
	
	T get() override
	{
		
		if(is_empty())
			return {};
		return akt->data;
	}
	bool update(T newvalue) override
	{
		if (is_empty())
			return false;
		akt->data = newvalue;
		return true;
	}
	/*bool move_first() override
	{
		if (is_empty()) return false;
		akt = start;
		return true;
	}*/

	bool move_last() override{
		
			if (is_empty()) return false;
			while (move_next());
			return true;
		
	}

	bool move_previous() override
	{
		if(is_bol()) return false;
		akt = akt->vor;
		return true;
	}
	bool move_next() override
	{
		if (is_eol()) return false;
		akt = akt->nach;
		return true;
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

