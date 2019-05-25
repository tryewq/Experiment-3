#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
	
	char a[200], c;
	int b, i, j;

	cout << "Input any character without space: \n";
	cin >> a;

	b = strlen(a);

	for (j = 0; j < b; j++)
		for (i = 0; i < b - 1; i++)
		{
			if (a[i] > a[i + 1]) 
			{
				c = a[i];
				a[i] = a[i + 1];
				a[i + 1] = c;
			}
		}
	
	cout << a <<endl;
	cout << "The size of the array is: "<< b;
	
	_getch();
	return 0;
	
}
