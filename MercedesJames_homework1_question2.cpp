

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
/*Mercedes James 
10/2/19
This code will take an input of secounds and outut how many hour, mins, and secounds that equals out to
*/

int main()
{
	//intilizing integers
	int sec = 0;
	int min = 0;
	int hour = 0;
	int minX = 0;
	int secX = 0;
	//user input
	cout << "Enter secounds:" << endl;
	//saves input to var sec
	cin >> sec;
	//divide sec by 60  to get mins
	min = sec / 60;
	//divide mins by 60 to get hours
	hour = min / 60;
	//subtract min by  the hour multplied by 60 to get the actual mins
	minX = min - (hour * 60);
	//sec mod 60 to get actual secounds
	secX = sec % 60;
	//output in hours, mins, sec format
	cout << hour << ":" << minX << ":" << secX << endl;
//exit code
	string exit;
	cin >> exit;


}


