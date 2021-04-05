/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>

using namespace std;

int main()
{
   
	int total_Time , remain_Time ; // Declare the variables  
    int day, time, hour, minutes ; // Declare the variables 

	cout << "What is the total time in minutes? = " ; // Input the total time in minutes
	cin >> total_Time ;

	
	day = total_Time / (60*24) ; // Calulate the number of days

	remain_Time = total_Time % (60*24) ; // Calculate the remaining amount of time
	
	hour = remain_Time / 60 ; // Calculate the number of hours
	
	remain_Time = remain_Time % 60 ; // Calculate the remaining amout of time
	
	minutes = remain_Time % 60 ; 	// Calculate the number of minutes 
    
	cout << "Day = " << day << endl ;  // Display Day
	cout << "Hour = " << hour << endl ;  // Display Hour
	cout << "Minutes = " << minutes << endl ;  // Display Minutes
		
	return 0;
}
