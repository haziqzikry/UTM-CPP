#include <iostream>
#include "input.h"

using namespace std;

int main()
{
	char name[40];

	readString("What is your name?", name);

	cout << endl;
	cout << "Hi " << name << "!" << endl;
	cout << "Welcome to the world of C++ programming." << endl
		 << endl;

	system("pause");
	return 0;
}
