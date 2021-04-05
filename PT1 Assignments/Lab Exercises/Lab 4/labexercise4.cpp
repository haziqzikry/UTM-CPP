/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>

using namespace std ;

int main ()
{
    int time, day, hour, minutes, time_left ; // Declare the variables 

	cout << "What is the time in minutes? = " ; // Input the total time in minutes
	cin >> time ;

	day = time / (60*24) ; // Calulate the number of days
	time_left = time % (60*24) ; // Calculate the remaining amount of time
	hour = time_left / 60 ; // Calculate the number of hours
	time_left = time_left % 60 ; // Calculate the remaining amout of time
	minutes = time_left % 60 ; 	// Calculate the number of minutes 
    
	cout << "Day: " << day << endl ;  // Display Day
	cout << "Hour: " << hour << endl ;  // Display Hour
	cout << "Minutes: " << minutes << endl ;  // Display Minutes
	
	return 0 ;
		
}
