/**
    Studycase8 
    Purpose: To display the summons and it fees that has been applied on each user
    Group member: IESKANDAR ZULQARNAIN BIN GHAZALI(A20EC0046)
				  AIMAN NA'IM BIN ARIFFIN (A20EC0008)
				  SYAZA SYAURAH BINTI MOHD YUSRAN (A20EC0227)
*/
   
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

// Declaration of global variables
int i, gap_date, gap_year, gap_month;
double price;

// to read the input and keep in the position
int extractDigit(string text, int &position){

	char temp[5] = "";
	string temp2;
	
	for (i=position; text[i] != ' ' ; i++){

		temp2 = text[i];
		strcat(temp,temp2.c_str());
		
	}

	position = i+1;

	return atoi(temp);
}

// read the next input and keep in position
string extractString(string text, int &position){

	string temp = "";
	
	for (i=position; text[i] != ' '; i++)
		temp += text[i];

	position = i+1;

	return temp;
}

double checkprice(string type){

		// to identify the price for each summons type
		if(type == "Parking")
			price = 40;

		else if(type == "No Entrance Pass")
			price = 50;

		else if(type == "Do not wear Matric Card")
			price = 65;

		else if(type == "Wearing Shorts")
			price = 65;

		else if(type == "Cheating during Exam")
			price = 100;

		else 
			price = 0;

	return price;
}

// to define each month into its name
string checkmonth(int smonth){
	string fmonth;

		if(smonth == 1)
			fmonth = "January";

		else if(smonth == 2)
			fmonth = "February";

		else if(smonth == 3)
			fmonth = "March";

		else if(smonth == 4)
			fmonth = "April";

		else if(smonth == 5)
			fmonth = "May";

		else if(smonth == 6)
			fmonth = "June";

		else if(smonth == 7)
			fmonth = "July";

		else if(smonth == 8)
			fmonth = "August";

		else if(smonth == 9)
			fmonth = "September";

		else if(smonth == 10)
			fmonth = "October";

		else if(smonth == 11)
			fmonth = "November";

		else if(smonth == 12)
			fmonth = "December";

		else 
			cout << "Month invalid!";

	return fmonth;
}

/**
    return the checkpayment based on given fee, time, summons year, summons month, summons date, 
    payment year, payment month, and pament date 
*/

double checkpayment(double fee, int time, int s_year, int s_month , int s_date, int f_year, int f_month, int f_date){

	if(time > 800 && time < 1700)
	{
        fee = fee; //calculation if pay at the right time
    }
    else
    {
        fee = fee * 2; //calculation if pay at the wrong time
    }

    // to calculate whether it have gap between to day
    gap_date = f_date - s_date; 
    gap_month = f_month - s_month;
    gap_year = f_year - s_year;
    
        if(gap_year == 0)
		{

            if(gap_month == 0)
			{

                if(gap_date < 2)
				{
                    
                     fee = fee * 0.7; //calculation if pay early 
                }
            }
        }
	return fee;
}

//Control the program
int main(){
	
	// Declaration of variables
	ifstream infile;
	string name[10],text[10];
	bool cont;
	int ptime[10], syear[10], smonth[10], sdate[10], pyear[10], pmonth[10], pdate[10];
	string sday[10], pday[10], stype[10];
	
	infile.open("CS8.txt");
	for (int i=0; i<10; i++){

		cont = true;
		getline(infile, text[i]);
		for(int j =0; cont; j++){

			if(isalpha(text[i][j]) || (isspace(text[i][j]) && isalpha(text[i][j+1]))) //read only text and invalid to digit
				name[i] = name[i] + text[i][j];

			else
				cont = false;
		}
		text[i].erase(0,name[i].length()+1); //erase the name that has been input
	}
	
	// to read the next input for each parts
	int position = 0;
	for(int i=0; i < 10; i++){

		ptime[i]=extractDigit(text[i],position);

		sday[i]=extractString(text[i],position);

		syear[i]=extractDigit(text[i],position);

		smonth[i]=extractDigit(text[i],position);

		sdate[i]=extractDigit(text[i],position);

		pday[i]=extractString(text[i],position);

		pyear[i]=extractDigit(text[i],position);

		pmonth[i]=extractDigit(text[i],position);

		pdate[i]=extractDigit(text[i],position);

		stype[i]=text[i];
		stype[i].erase(0,position);

		position = 0;
	}
	
	double sprice[10];
	string summons_month[10], payment_month[10];
	double payment[10];

	for(int i = 0; i < 10; i++){
		sprice[i] = checkprice(stype[i]);
		summons_month[i] = checkmonth(smonth[i]);  //To check summons month
		payment_month[i] = checkmonth(pmonth[i]);  //To check payment month
		payment[i] = checkpayment(sprice[i], ptime[i], syear[i], smonth[i], sdate[i], pyear[i], pmonth[i], pdate[i]); // To calculate payment by calling the user-defined function

	}
	
	// To output the data into the file txt
	ofstream dataout;
	dataout.open("CS8_OUTPUT.txt");
	dataout << left << setw(20) << "User" << setw(30) << "Summons Type" << setw(6) << "Time" << setw(15) << "Day Summons";
	dataout << setw(19) << "Date Summons" << setw(15) << "Day payment" << setw(19) << "Date Payment" << "Summons Fee" << endl;

	for(int i = 0 ; i < 10 ; i++){

		dataout << left << setw(20) << name[i] << setw(30) << stype[i]  << setfill('0') << right << setw(4) << ptime[i]<< setfill(' ') << left << "  "<< setw(15) << sday[i];
		dataout << sdate[i] << " " << summons_month[i] << " " << setw(8) << syear[i] << setw(15) << pday[i] << pdate[i] << " " << payment_month[i] << " " << setw(8) << pyear[i];
		dataout << "RM " << fixed << setprecision(2) << payment[i] << endl;

	}
}
