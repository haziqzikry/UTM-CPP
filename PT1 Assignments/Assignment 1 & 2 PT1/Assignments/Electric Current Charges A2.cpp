#include <iostream>
using namespace std ;

int main ()
{
    int V;                                      //initialize local variables 
    float energy,bill;
    do {
        cout << "Enter the Voltage value in V: "  ; //ask user to enter the voltage value
        cin >> V;
        if (V < 1)
            cout << "Invalid input of Voltage! \n" << endl ;  
    }while ( V < 1) ;
    
    do {
        cout<< "\nEnter Energy: " ;
        cin>> energy;
        if (energy < 0)
            cout << "Invalid input of Energy! \n" << endl ;  //Displays Invalid input of Energy! when when user enters a value other than the values in the selection
    }while ( energy < 0) ;
    
    if (V >= 1 && V <=50)                       //if selection Voltage > 1 and <= 50
        cout << "\nExtra Low Voltage";            // Displays "Extra Low Voltage"
    else if (V > 50 && V <= 1000)               //if selection Voltage > 50 and <= 1000
        cout << "\nLow Voltage" << endl;          // Displays "Low Voltage"
    else if (V  > 1000 && V <= 50000)           //if selection Voltage > 1000 and <= 50000
        cout << "\nMedium Voltage" << endl;       // Displays "Medium Voltage"
    else if (V > 50000 && V <= 230000)          //if selection Voltage > 50000 and <= 230000
        cout << "\nHigh Voltage" << endl;         // Displays "High Voltage"
    else if (V > 230000)                        //if selection Voltage > 230000
        cout << "\nExtra High Voltage" << endl;   // Displays "Extra High Voltage"

    if (energy >= 0 && energy <= 200) 
	{
		bill = energy*0.218;
		
		if (bill < 3.00)
		{
			bill = bill*0;
		}
		cout<<"RM"<<bill<<endl;
	}
	if (energy >= 201 && energy <= 300) 
	{
		bill = (200*0.218) + (energy - 200)*0.334;
		cout<<"RM"<<bill<<endl;
	}
	if (energy >= 301 && energy <= 600) 
	{
		bill = (200*0.218) + (100*0.334) + (energy - 300)*0.516;
		cout<<"RM"<<bill<<endl;
	}
	if (energy >= 601 && energy <= 900) 
	{
		bill = (200*0.218) + (100*0.334) + (300*0.516) + (energy - 600)*0.546;
		cout<<"RM"<<bill<<endl;
	}
	if (energy>=901)
	{
		bill = (200*0.218) + (100*0.334) + (300*0.516) + (300*0.546) + (energy-900)*0.571;
		cout<<"RM"<<bill<<endl;
	}
	
    system ("pause") ;
    return 0 ;
}