#include <iostream>
using namespace std;

void readString(const char *prompt, char *buffer, int size)
{
    cout << prompt << " => ";
    cin.getline(buffer, size);
}
