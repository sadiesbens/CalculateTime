

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sec = 0;
	int min = 0;
	int hour = 0;
	int minX = 0;
	int secX = 0;
	cout << "Enter secounds:" << endl;
	cin >> sec;
	min = sec / 60;
	hour = min / 60;
	minX = min - (hour * 60);
	secX = sec % 60;
	cout << hour << ":" << minX << ":" << secX << endl;

	string exit;
	cin >> exit;


}


