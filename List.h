
#include "stdafx.h"
#include <stdio.h>
#include <string>
using namespace std;

class List
{
public:


	List()
	{
		first=0;
	}
	
	bool isEmpty()
	{
		return first==0;
	}
/** func
функция засовывает элемент в начало
*/
	void pushBegin(const string& info)
	{
		ListItem *item = new ListItem(info, first);
		first= item;
	}
	/** func
функция засовывает элемент в конец
*/
	void pushEnd(const string& info)
	{
		ListItem *item = new ListItem(info);
		if (first==0)
		{
			first = item;
			return;
		}
		ListItem *current = first;
		while(current->nextPtr!=0)
			current=current->nextPtr;
		current->nextPtr=item;
		return;
	}
	/** func
функция убирает элемент в начале
*/
	void removeBegin()
	{
		ListItem *delItem;
		if( first == 0)
			return;
		else
		{
			delItem=first;
			first=delItem->nextPtr;
			delete delItem;
			return;
		}
	}
	/** func
функция убирает элемент в конце
*/
	void removeEnd()
	{
		ListItem *current;
		if (first==0)
			return;
		else
		{
			current = first;
			if (current->nextPtr==0)
				return removeBegin();
			while(current->nextPtr->nextPtr!=0)
				current=current->nextPtr;
			delete current->nextPtr;
			current->nextPtr=0;
			return;
		}
	}
	/** func
функция стирает все
*/
	void removeAll()
	{
		if(first==0)
			return;
		else
		{
			while(first!=0)
			{
				removeBegin();
			}
		}

	}
	/** func
функция получает элемент в конце
*/
	void getEnd(string &info)
	{
		ListItem *current;
		if (first==0)
			return;
		current=first;
		
		while(current->nextPtr!=0)
			current=current->nextPtr;
		info=info+current->data + " \n";
	}
	/** func
функция получает элемент в начале
*/
	void getBegin(string &info)
	{
		info=info + first->data + "  ";
	}
	
private:
	struct ListItem
	{
		string data;
		ListItem *nextPtr;

		ListItem(const string &info, ListItem* next=0)
		{
			this->data=info;
			this->nextPtr=next;
		}
	};
	ListItem *first;

};

