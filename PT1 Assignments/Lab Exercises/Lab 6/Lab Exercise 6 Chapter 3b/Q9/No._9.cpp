/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
	float value;
	
	cout<<"Enter digit:\t";
	cin>>value;
	
	if(value>=0 && value<=9)
	{
		cout<<"Valid digit.";
	}
	else
	{
		cout<<"Not a valid digit.";
	}
	
	return 0;
}
