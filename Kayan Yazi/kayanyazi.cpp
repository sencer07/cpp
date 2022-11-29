#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	system("color A");
	srand(time(NULL));

	while (1)
	{
		x = rand() % 10;
		cout << "\t" << x;
		y = rand() % 3;
		if (y == 0)
			cout << "\t";
	}
	return 0;
}
