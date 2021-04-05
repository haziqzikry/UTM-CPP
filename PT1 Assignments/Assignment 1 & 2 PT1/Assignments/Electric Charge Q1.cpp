#include <iostream>
using namespace std ;

int main ()
{
    int V;                                      //initialize local variable 
    
    cout << " Enter the Voltage value in V:"  ; //ask user to enter the voltage value
    cin >> V;

    if (V >= 1 && V <=50)                       //if selection Voltage > 1 and <= 50
        cout << "Extra Low Voltage";            // Displays "Extra Low Voltage"
    else if (V > 50 && V <= 1000)               //if selection Voltage > 50 and <= 1000
        cout << "Low Voltage" << endl;          // Displays "Low Voltage"
    else if (V  > 1000 && V <= 50000)           //if selection Voltage > 1000 and <= 50000
        cout << "Medium Voltage" << endl;       // Displays "Medium Voltage"
    else if (V > 50000 && V <= 230000)          //if selection Voltage > 50000 and <= 230000
        cout << "High Voltage" << endl;         // Displays "High Voltage"
    else if (V > 230000)                        //if selection Voltage > 230000
        cout << "Extra High Voltage" << endl;   // Displays "Extra High Voltage"

    else
        cout << "Invalid input!" ;              //Displays Invalie input! when when user enters a value other than the values in the selection

        
    system ("pause") ;
    return 0 ;
}