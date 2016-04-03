#ifndef LIST_H
#define LIST_H
#include "stdafx.h"
#include <stdio.h>
#include <string>
using namespace std;

class List
{
public:
	List();
	List(List&, string);
	void Add(string ch);
	void Del();
	void Get(string &result);
private:
	string data;
	List *Next;
};
#endif