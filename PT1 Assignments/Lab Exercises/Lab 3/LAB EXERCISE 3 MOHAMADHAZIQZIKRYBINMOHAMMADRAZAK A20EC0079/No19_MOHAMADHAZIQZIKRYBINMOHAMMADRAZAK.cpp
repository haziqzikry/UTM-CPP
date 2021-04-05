/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
	int Fahrenheit;								//Declare the variables
	float Celsius;								//Declare the variables	
	
	cout<<"Enter Fahrenheit: " ;			//Input the value in Fahrenheit
	cin>>Fahrenheit;							
	
	Celsius = (Fahrenheit-32)*(5.0/9.0);		// Calculate the value in Celcius
	cout<<"Celcius: "<<Celsius<<endl; 			//Display the value in Celsius

	return 0;
}
