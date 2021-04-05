/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
using namespace std;

// function prototype
void school ();
void university();

int main ()
{
	int x; // declare variables
	cout << "Enter a number: "; // ask user to enter a number
	cin >> x;
	
	if (x <10)
		{
        // call these two functions in this order if input less than 10
		school();
		university();
		}
	else 
		{
        // call these two functions in this order if input more than 10
		university();
		school();
		}
	return 0;
}

void university() // function university()
{
	cout <<"Universiti Teknologi Malaysia\n";
}

void school() // function school()
{
	cout << "School of Computing\n";
}



