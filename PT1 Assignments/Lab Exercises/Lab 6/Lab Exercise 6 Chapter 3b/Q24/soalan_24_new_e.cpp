/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;
int main()
{
	bool more = 1;
	int weightCnt = 0;
	double weight, totWeight = 0;
	cout <<"Calculate the Average and Total Weight";
	cout <<" of 5 students \n\n ";
	
	while(more==1)
	{
		cout <<"Enter the weight of a student: ";
		cin >>weight;
		totWeight += weight;
		weightCnt++;
		cout <<"Anymore weights? Enter 1 for yes OR 0 for no: ";
		cin >> more;	
	}
	
	cout << "\n\nYou have "<< weightCnt << "weights.";
	cout << "\nThe  Average Weight: " << (totWeight/weightCnt);
	cout << "\nThe Total Weight : " << totWeight;
	cout << "\n\nEnd of Program";
	return 0;
}
