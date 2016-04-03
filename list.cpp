#include "StdAfx.h"
#include "list.h"


#include "stdafx.h"
#include <stdio.h>
#include <string>
using namespace std;

List::List()
{
	Next=nullptr;
	data="";
}

List::List(List& p, string x)
{
	Next = &p;
	data = x;
}

void List::Add(string x)
{
	List *N = new List(*Next,data);
	data = x;
	Next = N;
}

void List::Get(string &result) 
{
	result = result + data + " ";
}

void List::Del() {
    data = Next->data;
    Next = Next->Next;	
}