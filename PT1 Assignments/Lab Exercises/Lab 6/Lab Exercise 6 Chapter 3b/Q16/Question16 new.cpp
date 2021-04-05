/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
    int filing_status ;

    cout<<"Enter your tax filing status: " ;
    cin >> filing_status ;

    if ( filing_status == 1)
        cout << "Single" << endl ;
    else
        if ( filing_status == 2)
    cout << "Married - filing jointly" << endl ;
    else
        if ( filing_status == 3)
    cout << "Married - filing separately" << endl ;
   else 
        if ( filing_status == 4)
    cout << "Head of household" << endl ;
    else 
        if ( filing_status < 0)
    cout << "Error in filing status" << endl ;
    else 
        if ( filing_status > 4)
    cout << "Error in filing status" << endl ;
            

    system ("pause") ;
	return 0;
}


    
   