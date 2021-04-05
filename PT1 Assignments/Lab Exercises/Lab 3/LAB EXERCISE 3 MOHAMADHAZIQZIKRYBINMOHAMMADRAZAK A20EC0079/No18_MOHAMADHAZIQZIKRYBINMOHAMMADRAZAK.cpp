/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
#include <iomanip> 

using namespace std;
int main()
{
	int UnitSale=1500; // Declare and set the variable
	float PricePerUnit=20.00,CostPerUnit=15.00, TotalCost,TotalSale,TotalProfit; //Declare and set the variables
	
	TotalCost = UnitSale*CostPerUnit; // Calcualte the total cost
	
	TotalSale = UnitSale*PricePerUnit; //Calculate the total sale
	
	TotalProfit=TotalSale-TotalCost;  // Calculate the total profit
	
	cout <<"The Total Unit Sale is RM" << UnitSale << endl ; //Display the unit sale
	cout <<"The price per unit is RM"<< fixed << setprecision(2) << PricePerUnit << endl ; //Display the price per unit
	cout <<"The Cost per unit is RM" << fixed << setprecision(2) << CostPerUnit  << endl ; //Display the cost per unit
	cout << "The Total Profit is RM" <<TotalProfit << endl ; //Display the total profit
	
	return 0 ;
}
