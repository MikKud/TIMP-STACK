#include "stdafx.h"
#include <iostream>
#include <string>
#include <clocale>
#include "list.h"
using namespace std;

string result = "";

int main()
{
	int numbers;
	string x;
	string s;
	List MYlist;

	
	cin >> numbers;

	for (int i = 1; i <= numbers; i++) {
		cin >> s;
		if (s == "add") {
			cin >> x;
			MYlist.Add(x);
		}
		if (s == "get") {
			MYlist.Get(result);
		}
		if (s == "del") {
			MYlist.Del();
		}
	}

	cout << endl << "Exit: ";
	cout << result;
	system("pause");
	return 0;
}