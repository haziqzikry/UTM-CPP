
// School of Computing, Faculty of Engineering, UTM
// SECJ1013/ SCSJ1013 - Programming Technique I
// Semester 1, 2019/2020
// Test 3  - Question 2 Problem Solving (70 marks)
// Name - Meor Idlan Shafiq Bin Meor Ahmad Fauzi
// Matric Number - A19EC0085

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/*
	Global Constants:
	MAX_PASSENGERS => maximum amount of passengers found in the input file
	MAX_NAME => maximum amount of characters for each names of passengers
*/
const int MAX_PASSENGERS = 10;
const int MAX_NAME = 100;


/*
	Function checkTime:
	ARGS: 
	first double => departure time
	second double => check in time
	char => either 'W' or 'O'
	
	WHAT IT DOES:
	performs the necessary calculations on the departure time to see if the check in time is within accepted bounds
	according to the char.
	if char = 'W'
	accepted time is more than half an hour before the departure time
	if char = 'O'
	accepted time is less than 12 hours but more than an hour before the departure time
	
	RETURNS:
	true if check in time is within acceptable bounds
	false if otherwise
*/
bool checkTime(double, double, char);

double checkFees(double[][3], int);

bool checkFood(char[][3], int);

int main()
{
	ifstream inFile("input.txt");
	char Passenger[MAX_PASSENGERS][MAX_NAME];
	if(inFile.is_open())
	{
		for(int i = 0; i < MAX_PASSENGERS; i++)
		{
			inFile.getline(Passenger[i], MAX_NAME);
		}
	}
	else
	{
		cout << "File unable to be opened. Exiting." << endl;
		return 0;
	}
	
	double checkIn[MAX_PASSENGERS][3];
	char type[MAX_PASSENGERS][3];	
	double Departure[MAX_PASSENGERS];		   	 			 
	for(int i = 0; i < MAX_PASSENGERS; i++)
	{
		cout << "Passenger Name: " << Passenger[i] << endl;
		cout << "Please enter departure time (HH.MM) >> ";
		cin >> Departure[i];
		cout << "Please enter check in time (HH.MM) >> ";
		cin >> checkIn[i][0];
		cout << "Please enter luggage weight (kg) >> ";
		cin >> checkIn[i][1];
		cout << "Please enter hand carry weight (kg) >> ";
		cin >> checkIn[i][2];
		cin.ignore();
		cout << "Please enter your check in type and order food status\n"
		     << "(W for walk in, O for online, N for no food, F for food ordered. EG: WN, WF, ON, OF)"
		     << "\n >> ";
		cin.getline(type[i], 3);
		cout << endl;
	}

//  Sample Data for checking
//	checkIn = {{21.45, 10.5, 2.5},
//			   {16.00, 6, 10},
//			   {13.00, 7, 7},
//			   {02.15, 6, 5},
//			   {12.30, 7.5, 2.72},
//			   {20.05, 9, 3},
//			   {15.50, 7.11, 6},
//			   {13.00, 10, 4.9},
//			   {05.15, 8, 8},
//			   {20.00, 8, 8}};							   
//	type = {"WN", "ON", "WF", "WN", "OF", "ON", "OF", "WF", "WN", "OF"};	
//	Departure = {22.00, 17.55, 16.45, 02.30, 15.00, 09.15, 00.30, 14.20, 07.30, 10.45};
	
	cout << left;
	cout << setw(15) << "Name" << setw(20) << "Extra Fees" << setw(4) << "Food" << endl;
	for(int i = 0; i < MAX_PASSENGERS; i++)
	{
		if(type[i][0] == 'W')
		{
			if(checkTime(checkIn[i][0], Departure[i], 'W'))
			{
				cout << setw(15) << Passenger[i];
				
				double extraFees = checkFees(checkIn, i);
				cout << setw(20) << fixed << setprecision(2);
				cout << extraFees;
				
				if(checkFood(type, i))
				{
					cout << setw(4) << "Yes";
				}
				else 
				{
					cout << setw(4) << "No";
				}
				
				cout << endl;
			}
		}
		else
		{
			if(checkTime(checkIn[i][0], Departure[i], 'O'))
			{
				cout << setw(15) << Passenger[i];
			
				double extraFees = checkFees(checkIn, i);
				cout << setw(20) << fixed << setprecision(2);
				cout << extraFees;
				
				if(checkFood(type, i))
				{
					cout << setw(4) << "Yes";
				}
				else 
				{
					cout << setw(4) << "No";
				}
				
				cout << endl;
			}
		}
	}
	
	inFile.close();
	return 0;
}

bool checkTime(double checkInTime, double departureTime, char a)
{
	
	int departMins = static_cast<int>(departureTime * 100) % 100;
	int departHrs = static_cast<int>(departureTime);
	int departHrs2 = static_cast<int>(departureTime);
	
	if(a == 'W')
	{
		departMins -= 30;
		if(departMins < 0)
		{
			departMins += 60;
			departHrs -= 1;
		}
	}
	else
	{
		departHrs -= 1;
		if(departHrs == -1)
		{
			departHrs = 23; // 11pm the day before
		}
		
		departHrs2 -= 12;
		if(departHrs2 < 0)
		{
			departHrs2 += 24;
		}
	}
	
	double acceptedTime = ((departHrs * 100.0) + departMins) / 100;
	double acceptedTime2 = ((departHrs2 * 100.0) + departMins) / 100;
	if(checkInTime < acceptedTime)
	{
		if(a == 'O')
		{
			if(checkInTime > acceptedTime2)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

double checkFees(double checkIn[][3], int index)
{
	double luggage = checkIn[index][1];
	double handCarry = checkIn[index][2];
	
	if(handCarry > 5)
	{
		luggage += handCarry;
	}
	
	if(luggage > 10)
	{
		return 20.50;
	}
	return 0;
}

bool checkFood(char type[][3], int index)
{
	if(type[index][1] == 'N')
	{
		return false;
	}
	return true;
}
