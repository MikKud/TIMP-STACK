// Spisok_s_indexom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List_for_list.h"
#include <string>
#include <stdio.h>
using namespace std;


int main()
{
	int N;
	int index;
	string x;
	string s;
	list A;

	setlocale(LC_CTYPE, "Russian");
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> s;
		if (s == "add") {
			cin >> index;
			cin >> x;
			A.add(index, x);
		}
		if (s == "get") {
			cin >> index;
			A.get(index);
		}
		if (s == "del") {
			cin >> index;
			A.del(index);
		}
	}

	cout << endl << "Выход" << endl;
	
	system("pause");
	return 0;
}
