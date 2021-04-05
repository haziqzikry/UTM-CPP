#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;
void checkTIME(int, double[][2], char[]);
void checkstatus(double, double, double);
int main()
{ const int row=10;
const int SIZE=10;
char Passenger[row][SIZE];
double Checkin[row][2];
char type[row];	
fstream infile("input2.txt", ios::in); // open the files
for (int a=0; a<10; a++)
{
    infile>>Passenger[a]>>Checkin[a][0]>>Checkin[a][1]>>type[a];
}
cout<<left;
 cout<<setw(10)<<"NAME"<<setw(10)<<"Departure"<<setw(25)<<"Start Checkin"<<setw(25)<<"End Checkin"<<setw(10)<<"Checkin status"<<endl;
 cout<<fixed;
for (int i=0;i<row;i++)
{  cout<<setw(10)<<Passenger[i]<<setw(10)<<setprecision(2)<<Checkin[i][0];
   checkTIME(i,Checkin,type);
}
infile.close();
    system("pause");
	return 0;
}



void checkTIME(int i, double CI[][2], char t[])
{
    double E=0.00, L=0.00;

   
if (t[i]=='W')
{
if (CI[i][0]<3)
{E=CI[i][0]+24.00-3;
cout<<setw(6)<<setprecision(2)<<E<<setw(19)<<"the day before";}
else 
{
    E=CI[i][0]-3;
cout<<setw(25)<<setprecision(2)<<E;
}
if (CI[i][0]<0.3)
{L=CI[i][0]+24.00-1.00+0.6-0.3;
cout<<setw(6)<<setprecision(2)<<L<<setw(19)<<"the day before";}
else 
{int Dmin=static_cast<int>(CI[i][0]*100)%100;
if (Dmin<0.3)
{L= CI[i][0]-0.4-0.3;
cout<<setw(25)<<setprecision(2)<<L;}
else{
    L=CI[i][0]-0.3;
    cout<<setw(25)<<setprecision(2)<<L;
}
}

}


else
{
   if (CI[i][0]<12)
{E=CI[i][0]+24.00-12;
cout<<setw(6)<<setprecision(2)<<E<<setw(19)<<"the day before";}
else 
{
    E=CI[i][0]-12;
cout<<setw(25)<<setprecision(2)<<E;
}
if (CI[i][0]<1)
{L=CI[i][0]+24.00-1.00+0.6-1;
cout<<setw(6)<<setprecision(2)<<L<<setw(19)<<"the day before";}
else 
{
    L=CI[i][0]-0.3;
    cout<<setw(25)<<setprecision(2)<<L;
}


}
checkstatus(E,L,CI[i][1]);
    
}

void checkstatus(double E, double L, double C )
{
if (C<L && C>E)
cout<<setw(10)<<"Onboard"<<endl;
else if (C>L)
cout<<setw(10)<< "Late!"<<endl;
else
cout<<setw(10)<< "Too Early!"<<endl;
}
