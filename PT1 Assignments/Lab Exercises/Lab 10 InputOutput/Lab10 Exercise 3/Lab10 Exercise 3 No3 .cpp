/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */
// Program that converts MYR to Turkish Lira
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float MYR_TO_TRY = 0.5997 ; // Declare and set the variable
    float MYR, turkish_Lira ;   // Declare the variables
	
	cout << "Insert currency in MYR = " ; // Input the currency value
	cin >> MYR ;
	
    turkish_Lira = MYR *  MYR_TO_TRY ; // Calculate the currency in Turkish lira

	cout << "Currency in Turkish Lira = " << fixed << setprecision(2) << turkish_Lira << endl ; // Display the currency in Turkish Lira
		
	system ("pause") ;
	return 0;
	
}
