/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
	char x;
	float salary;
	
	cout<<"Do you employed? (Y/N):\t";
	cin>> x;
	
	switch (x)
	{

		case 'Y':
			cout<<"How much is your salary:\n";
			cin >> salary;
			if (salary>0 && salary<5000)
			{
				cout<<"Please provide a guarantor\n";
			}
			else if(salary>=5000)
			{
				cout<<"Your housing loan application is acceptable";
			}
			break;
			
		case 'y':
			cout<<"How much is your salary:\n";
			cin >> salary;
			if (salary>0 && salary<5000)
			{
				cout<<"Please provide a guarantor\n";
			}
			else if(salary>=5000)
			{
				cout<<"Your housing loan application is acceptable";
			}
			break;
		
		case 'N':
			cout<<"Your housing loan application is rejected";
			break;
		
		case 'n':
			cout<<"Your housing loan application is rejected";
			break;
			
		default:
			cout<<"input error"<<endl;
	}
		
	
	return 0;
}
