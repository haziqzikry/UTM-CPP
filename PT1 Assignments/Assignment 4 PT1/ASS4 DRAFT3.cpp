/* Assignment 3

Group members:

Khairul Izzat Bin Hashim					-A20EC0058
Ahmad Faruq Bin Azlan						-A20EC0005
Mohamad Haziq Zikry Bin Mohammad Razak		-A20EC0079
Section 08
Case Study 01
Lecturer's Name: Dr.Adila Firdaus binti Arbain
*/

//declare the predefined headers
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int V[10];
string outputV;
char temp[10];
string text[10];
	string User_Name[10];
	string temp2;
	
	int energy[10];
	double bill[10];

string VoltageLevel (int V )
{
    // Voltage Level
    if (V >= 1 && V<=50)                     //if selection Voltage > 1 and <= 50   										
        outputV ="Extra Low Voltage" ;             // Displays "Extra Low Voltage"			
    else if (V > 50 && V <= 1000)            //if selection Voltage > 50 and <= 1000    										
        outputV ="Low Voltage" ;         		  // Displays "Low Voltage"
    else if (V  > 1000 && V <= 50000)       //if selection Voltage > 1000 and <= 50000    						
        outputV ="Medium Voltage" ;       		 // Displays "Medium Voltage"			
    else if (V> 50000 && V <= 230000)  	 //if selection Voltage > 50000 and <= 230000
        outputV = "High Voltage" ;				//Displays "High Voltage"
    else if (V > 230000)                     //if selection Voltage > 230000   										
        outputV ="Extra High Voltage" ;	        // Displays "Extra High Voltage"	

    return outputV ;   
}

double TotalBill (int energy, double bill ){
    
        if (energy >= 0 && energy <= 200) 							//statement if the amount of the energy entered between 0 and 200
        {
            bill = energy*0.218;															//formula to calculate bill												

            if (bill < 3.00)												//statement if bill lower than 3.00					
            {
                bill = bill*0;															//formula to calculate bill	
            }				
        }
            else if (energy >= 201 && energy <= 300) 					//statement if the amount of the energy entered between 201 and 300		
            {
                bill = (200*0.218) + (energy - 200)*0.334;								//formula to calculate bill			
            }
            else if (energy >= 301 && energy <= 600) 					//statement if the amount of the energy entered between 301 and 600						
            {
                bill = (200*0.218) + (100*0.334) + (energy - 300)*0.516;					//formula to calculate bill													
            }
            else if (energy >= 601 && energy <= 900) 					//statement if the amount of the energy entered between 601 and 900							
            {
                bill = (200*0.218) + (100*0.334) + (300*0.516) + (energy - 600)*0.546;	//formula to calculate bill														
            }
            else if (energy>=901)										//statement if the amount of the energy entered over 901							
            {
                bill = (200*0.218) + (100*0.334) + (300*0.516) + (300*0.546) + (energy-900)*0.571; //formula to calculate bill	
            }	
        return bill;
    }


int main()
{	  

	//variable declaration 
	
	
	ifstream inDATA; //declare the input files
	ofstream outDATA; //declare the output files
	inDATA.open("CS1.txt"); // open the input file
	outDATA.open("CS1_OUTPUT.txt"); // open the output file
	
	//displays in the output file
	outDATA << setw(14) << left << "Name" << setw(10) << "Voltage" << setw(20) << "Voltage Level" << setw(20) << "Total Consumption" << "Bill" << endl;
	
	//get all the inputs from the input file
	for (int i = 0; i < 10; i++)
		getline(inDATA, text[i]);	
	
	for (int i = 0; i < 10; i++)
	{
		//separates the string inputs from the input file
		for (int j = 0; j <= text[i].length(); j++)
		{
			//separate the user names information from the string input
			if(isalpha(text[i][j]) || (isspace(text[i][j]) && isalpha(text[i][j+1])))
			{
				User_Name[i] = User_Name[i] + text[i][j];
			}
			//take the values that are in digits from the input file
			else if (isdigit(text[i][j]) || text[i][j]== '.')
			{
				temp2 = text[i][j];
				strcat(temp, temp2.c_str());
			}
			//to separarte the two values of voltage and total consumption (energy) from the input files and takes the value of voltage
			else if (isspace(text[i][j]))
			{
                //change the data type from string to int
				 V [i]= atoi(temp);
				    strcpy(temp,"") ;
                
                // Call function to display voltage levels
                   outputV = VoltageLevel (V [i]);
            
			}
			else
			{
				//change the data type from string to double
				energy[i] = atof(temp);
				strcpy(temp,"");
				
				bill [i] = TotalBill (energy [i], bill [i]);
			}
				
		}			
		outDATA << setw(14) << left << User_Name[i];						//display all name in CS1.txt to CS1_OUTPUT.txt
		outDATA <<V[i]<<"V\t";												//display all Voltage in CS1.txt to CS1_OUTPUT.txt
		outDATA << setw(20) << outputV; 									//display all Voltage Level to CS1_OUTPUT.txt
		outDATA << setw(20) << energy[i];									//display all Total Consumption in CS1.txt to CS1_OUTPUT.txt
		outDATA << fixed<< setprecision(2) << "RM" << bill[i] << endl;		//display all Bill calculated to CS1_OUTPUT.txt
	}
}
