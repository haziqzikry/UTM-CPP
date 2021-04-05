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

int main()
{	  

	//variable declaration 
	string text[10];
	string User_Name[10];
	string outputV;
	string temp2;
	char temp[10];
	int V[10];
	int energy[10];
	double bill[10];
	
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
				V[i]= atoi(temp);
				strcpy(temp,"");
				{
						// Voltage Level
						if (V[i] >= 1 && V[i] <=50)                     //if selection Voltage > 1 and <= 50   										
					        outputV ="Extra Low Voltage" ;             // Displays "Extra Low Voltage"			
					    else if (V[i] > 50 && V[i] <= 1000)            //if selection Voltage > 50 and <= 1000    										
					        outputV ="Low Voltage" ;         		  // Displays "Low Voltage"
					    else if (V[i]  > 1000 && V[i] <= 50000)       //if selection Voltage > 1000 and <= 50000    						
					        outputV ="Medium Voltage" ;       		 // Displays "Medium Voltage"			
					    else if (V[i] > 50000 && V[i] <= 230000)  	 //if selection Voltage > 50000 and <= 230000
					        outputV = "High Voltage" ;				//Displays "High Voltage"
					    else if (V[i] > 230000)                     //if selection Voltage > 230000   										
							outputV ="Extra High Voltage" ;	        // Displays "Extra High Voltage"	
				}	
			}
			else
			{
				energy[i] = atof(temp);
				strcpy(temp,"");
				{
					if (energy[i] >= 0 && energy[i] <= 200) 							
					{
						bill[i] = energy[i]*0.218;														
		
						if (bill[i] < 3.00)																	
						{
							bill[i] = bill[i]*0;													
						}				
					}
						else if (energy[i] >= 201 && energy[i] <= 300) 							
						{
							bill[i] = (200*0.218) + (energy[i] - 200)*0.334;											
						}
						else if (energy[i] >= 301 && energy[i] <= 600) 											
						{
							bill[i] = (200*0.218) + (100*0.334) + (energy[i] - 300)*0.516;																		
						}
						else if (energy[i] >= 601 && energy[i] <= 900) 												
						{
							bill[i] = (200*0.218) + (100*0.334) + (300*0.516) + (energy[i] - 600)*0.546;															
						}
						else if (energy[i]>=901)																	
						{
							bill[i] = (200*0.218) + (100*0.334) + (300*0.516) + (300*0.546) + (energy[i]-900)*0.571;	
						}	
				}
				
			}
				
		}			
		outDATA << setw(14) << left << User_Name[i];
		outDATA <<V[i]<<"V\t";
		outDATA << setw(20) << outputV; 
		outDATA << setw(20) << energy[i];
		outDATA << fixed<< setprecision(2) << "RM" << bill[i] << endl;
	}
}
