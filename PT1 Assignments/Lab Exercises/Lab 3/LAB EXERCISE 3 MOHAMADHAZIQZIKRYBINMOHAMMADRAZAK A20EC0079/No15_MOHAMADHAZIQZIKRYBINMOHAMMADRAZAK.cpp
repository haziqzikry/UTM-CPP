/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>

using namespace std;

int main()
{
	
	float MYR_TO_TRY = 0.5997 ; // Declare and set the variable
    float MYR, turkish_Lira ;   // Declare the variables
	
	cout << "Insert currency in MYR = " ; // Input the currency value
	cin >> MYR ;
	
    turkish_Lira = MYR *  MYR_TO_TRY ; // Calculate the currency in Turkish lira

	cout << "Currency in Turkish Lira = " << turkish_Lira << endl ; // Display the currency in Turkish Lira
		
	return 0;
}
