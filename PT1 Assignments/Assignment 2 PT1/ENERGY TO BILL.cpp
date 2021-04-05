#include<iostream>
using namespace std;

int main()
{
	float energy,bill;
	
	cout<<"Enter Energy: "<<endl;
	cin>> energy;
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
	
	else
	{
		cout<<"input error";
	}

	    system ("pause") ;

	return 0;
}



