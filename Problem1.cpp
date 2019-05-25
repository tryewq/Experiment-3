#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
	
	cout << "Enter 10 elements" << endl;
	double digits[11], sum = 0, ave, small, large;

	for (int a = 1; a < 11; a++)
	{
		cout << "Entry #" << a << ": ";
		cin >> digits[a];
	}

	for (int a = 1; a < 11; a++)
	{
		sum = sum + digits[a];
	}

	large = digits[1];
	small = digits[1];

	for (int a = 1; a < 11; a++)
	{
		if (digits[a] > large)
			large = digits[a];

		if (digits[a] < small)
			small = digits[a];

	}
	ave = sum / 10;
	cout << "Total of All 10 Digits is: " << sum << endl;
	cout << "Average of All 10 Digits is: " << sum / 10 << endl;
	cout << "Largest of All 10 Digits is: " << large << endl;
	cout << "Smalles of All 10 Digits is: " << small;

	_getch();
	return 0;
	
}
