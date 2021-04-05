/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
using namespace std;

int main()
{
	int input; // declare variables
	cout << "Enter a number > "; // ask user to enter a number 
	cin >>input ;
	if (input <10) 
		{
        // display these if input less than 10
		cout << "School of Computing\n"; 
		cout << "University Teknologi Malaysia\n";
		}
	else 
		{
        // display these if input more than 10
		cout << "University Teknologi Malaysia\n";
		cout << "School of Computing\n";	
		}
	return 0;
}
