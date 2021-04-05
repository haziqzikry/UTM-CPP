/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
    int bonus_point = 10 ;
    int purchases ;

    cout<<"How much did you purchase? : " ;
    cin >> purchases ;

    if ( purchases > 200)
        bonus_point = bonus_point * 10 ;

        
    cout <<"Amount of purchases = " << purchases << endl; 
    cout <<"Amount of bonus points received = " << bonus_point << endl; 

    system ("pause") ;
	return 0;
}


    
   