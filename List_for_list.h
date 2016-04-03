#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class list {
private:
	string info;
	list *next;
public:
	list()
	{
	next = nullptr;
	info = "";
	}
	/** func
функция засовывает элемент по индексу
*/
	void add(int i, string data)
{
	if (i == 0)
	{
		this->info = data;
	}
	else
	{
		if (this->next == nullptr)
		{
			this->next = new list();
			this->next->add(i - 1, data);
		}
		else
		{
			this->next->add(i - 1, data);
		}
	}
}
/** func
функция получает элемент по индексу
*/
	void get(int i)
	{
	if (next == nullptr && info == "")  
	{
		return;
	}
	bool empty = false; 
	list *pp = this;
	for (int j = 0; j < i; j++)
	{
		if (pp->next == nullptr&& j != 0)
		{
			empty = true;
			break;
		}
		pp = pp->next;
	}
	if (!empty)
	{
		cout << pp->info.data() << endl;
	}
	else
	{
		return;
	}

}
/** func
функция удаляет элемент по индексу
*/
	void del(int i)
	{
	list *p = this;
	list *pp;
	if (next == nullptr && info == "")
	{
		cout << "list is empty" << endl;
		return;
	}
	if (i = 0)
	{
		p->info = "";
	}
	else
	{
		for (int j = 0; j < i - 1; j++)
		{

			p = p->next;
		}
		pp = p;			
		p = p->next;
		pp->next = p->next;  
		delete p;
	}

	
  }


};
