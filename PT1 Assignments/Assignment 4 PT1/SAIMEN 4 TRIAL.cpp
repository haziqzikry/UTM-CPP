#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

	string text[10];
	string User_Name[10];
	string outputV;
	string temp2;
	char temp[10];
	int V[10];
	int energy[10];
	double bill[10];

void calcbill(int energy[],int i)
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

void calcvolt(int V[],int i)
{
	{
		if (V[i] >= 1 && V[i] <=50)                       										
			outputV ="Extra Low Voltage" ;            			
		else if (V[i] > 50 && V[i] <= 1000)               										
			outputV ="Low Voltage" ;         		
		else if (V[i]  > 1000 && V[i] <= 50000)          						
			outputV ="Medium Voltage" ;       					
		else if (V[i] > 50000 && V[i] <= 230000)   
			outputV = "High Voltage" ;				
		else if (V[i] > 230000)                        										
			outputV ="Extra High Voltage" ;	
	}	
}

int main()
{
	ifstream inDATA;
	ofstream outDATA;
	inDATA.open("CS1.txt");
	outDATA.open("CS1_OUTPUT.txt");
	
	outDATA << setw(14) << left << "Name" << setw(10) << "Voltage" << setw(20) << "Voltage Level" << setw(20) << "Total Consumption" << "Bill" << endl;
	
	for (int i = 0; i < 10; i++)
		getline(inDATA, text[i]);	
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= text[i].length(); j++)
		{
			if(isalpha(text[i][j]) || (isspace(text[i][j]) && isalpha(text[i][j+1])))
			{
				User_Name[i] = User_Name[i] + text[i][j];
			}
			
			else if (isdigit(text[i][j]) || text[i][j]== '.')
			{
				temp2 = text[i][j];
				strcat(temp, temp2.c_str());
			}
			else if (isspace(text[i][j]))
			{
				V[i]= atof(temp);
				strcpy(temp,"");
				calcvolt(V,i);
			}
			else
			{
				energy[i] = atof(temp);
				strcpy(temp,"");
				calcbill(energy,i);
			}	
		}
		outDATA << setw(14) << left << User_Name[i];
		outDATA <<V[i]<<"V\t";
		outDATA << setw(20) << outputV; 
		outDATA << setw(20) << energy[i];
		outDATA << fixed<< setprecision(2) << "RM" << bill[i] << endl;
	}
}
