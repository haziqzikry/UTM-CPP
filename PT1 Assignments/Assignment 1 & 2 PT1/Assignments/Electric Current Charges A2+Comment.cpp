#include <iostream>
using namespace std ;

int main ()
{
    int V;                                     											 	//variables declaration
    float energy,bill;
    do {																					//post-test loop
        cout << "Enter the Voltage value in V\t:";        									//ask user to enter the voltage value
        cin >> V;
        if (V < 1)       								       								//statement if v < 1
            cout << "Invalid input of Voltage!\a\n" << endl ;         						//display "Invalid input of Voltage!"
    }while ( V < 1) ;      								       								//loop while condition v < 1
    
    do {																					//post-test loop
        cout<< "Enter Energy\t\t\t:" ;														//display "Enter energy"
        cin>> energy;																		//user enter energy value
        if (energy < 0)																		//if energy < 0
            cout << "Invalid input of Energy!\a\n" << endl ;  								//Displays Invalid input of Energy! 
    }while ( energy < 0) ;
    
	// Voltage Level
    if (V >= 1 && V <=50)                       											//if selection Voltage > 1 and <= 50
        cout << "Voltage Level\t\t\t:Extra Low Voltage"<<endl;            					// Displays "Extra Low Voltage"
    else if (V > 50 && V <= 1000)               											//if selection Voltage > 50 and <= 1000
        cout << "Voltage Level\t\t\t:Low Voltage"<<endl;         							// Displays "Low Voltage"
    else if (V  > 1000 && V <= 50000)          												//if selection Voltage > 1000 and <= 50000
        cout << "Voltage Level\t\t\t:Medium Voltage"<<endl;       							// Displays "Medium Voltage"
    else if (V > 50000 && V <= 230000)          											//if selection Voltage > 50000 and <= 230000
        cout << "Voltage Level\t\t\t:High Voltage"<<endl;         							// Displays "High Voltage"
    else if (V > 230000)                        											//if selection Voltage > 230000
        cout << "Voltage Level\t\t\t:Extra High Voltage"<<endl;   							// Displays "Extra High Voltage"

	// Electrical Bill
	if (energy >= 0 && energy <= 200) 														//statement if the amount of the energy entered between 0 and 200
	{
		bill = energy*0.218;																//formula to calculate bill
		
		if (bill < 3.00)																	//statement if bill lower than 3.00
		{
			bill = bill*0;																	//calculation if bill lower than 3.00			
		}
		cout<<"Total bill\t\t\t:RM"<<bill<<endl;											//display bill value
	}
	else if (energy >= 201 && energy <= 300) 												//statement if the amount of the energy entered between 201 and 300
	{
		bill = (200*0.218) + (energy - 200)*0.334;											//formula to calculate bill
		cout<<"Total bill\t\t\t:RM"<<bill<<endl;											//display bill value
	}
	else if (energy >= 301 && energy <= 600) 												//statement if the amount of the energy entered between 301 and 600
	{
		bill = (200*0.218) + (100*0.334) + (energy - 300)*0.516;							//formula to calculate bill
		cout<<"Total bill\t\t\t:RM"<<bill<<endl;											//display bill value
	}
	else if (energy >= 601 && energy <= 900) 												//statement if the amount of the energy entered between 601 and 900
	{
		bill = (200*0.218) + (100*0.334) + (300*0.516) + (energy - 600)*0.546;				//formula to calculate bill
		cout<<"Total bill\t\t\t:RM"<<bill<<endl;											//display bill value
	}
	else if (energy>=901)																	//statement if the amount of the energy entered over 901
	{
		bill = (200*0.218) + (100*0.334) + (300*0.516) + (300*0.546) + (energy-900)*0.571;	//formula to calculate bill
		cout<<"Total bill\t\t\t:RM"<<bill<<endl;											//display bill value
	}
	else																					//statement if the amount of the energy entered is invalid
	{
		cout<<"Input error!!\a"<<endl;														//display "Input error"
	}
	
    system ("pause") ;
    return 0 ;
}
