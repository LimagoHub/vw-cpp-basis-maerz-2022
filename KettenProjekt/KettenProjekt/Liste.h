#pragma once

template<class T>
class Liste // Interface
{
public:

	virtual void append(T value) = 0;
	virtual bool remove() = 0; // löscht das aktuelle Element
	virtual void clear() = 0;
	virtual T get()=0; // nullptr wenn Liste leer
	virtual bool update(T newvalue) = 0;

	virtual bool move_first()
	{
		if (is_empty()) return false;
		while (move_previous());
		return true;
	}
	virtual bool move_last()=0;
	virtual bool move_previous() = 0;
	virtual bool move_next() = 0;
	/// <summary>
	/// liefert true, wenn wir entweder eine leere Liste haben, oder AUF dem ersten stehen.
	/// </summary>
	/// <returns></returns>
	virtual bool is_bol() = 0;
	/// <summary>
	/// liefert true, wenn wir entweder eine leere Liste haben, oder AUF dem letzten stehen.
	/// </summary>
	/// <returns></returns>
	virtual bool is_eol() = 0;
	virtual bool is_empty() = 0;

};


