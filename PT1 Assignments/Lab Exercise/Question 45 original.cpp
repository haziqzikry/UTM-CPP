//Program 3.16

#include<iostream>
using namespace std;

int main()
{
    int test = 0 ;

    while (test++ < 10)
    {
        if (test == 4)
        continue ;
        cout << test << "  " ;
    }

	return 0;
}
