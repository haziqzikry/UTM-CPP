#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;
double checkfees(int, double[][3]);
bool checkfood(int, char[][3]);
int main()
{ const int row=10;
const int SIZE=10;
double fees=0.00;
char Passenger[row][SIZE];
double Departure[row];
fstream infile("input.txt", ios::in); // open the files
for (int a=0; a<10; a++)
{
    infile>>Passenger[a]>>Departure[a];
}


double Checkin[row][3]={{21.45,10.50,2.50},{16.00,6.00,10.00},{13.00,7.00,7.00},{02.15,6.00,5.00},{12.30,7.50,2.72},{20.05,9.00,3.00},{15.50,7.11,6.00},{13.00,10.00,4.90},{05.15,8.00,8.00},{20.00,8.00,8.00}};
char type[row][3]={"WN", "ON", "WF", "WN", "OF", "ON", "OF", "WF", "WN", "OF"};	
 cout<<setw(10)<<"NAME"<<setw(10)<<" Extra Fees"<<setw(10)<<"Food"<<endl;
for (int i=0;i<row;i++)
{
    if(Checkin[i][0]> Departure[i])
    {
       Departure[i]+=24.00; 
    }
if (type[i][0]=='W')
{
    int Dmin=static_cast<int>(Departure[i]*100)%100;
int cmin=static_cast<int>(Checkin[i][0]*100)%100;
if (cmin>Dmin)
{
    Departure[i]=Departure[i]-0.40;
}
double j=Departure[i]-Checkin[i][0];
    if(j>0.30)
    {
        fees=checkfees(i,Checkin);
        cout<<setw(10)<<Passenger[i]<<setw(10)<<fees<<setw(10);
       if (checkfood(i,type))
       cout<<"Yes"<<endl;
       else
        cout<<"NO"<<endl;
    }
    else
    {
        continue;
    }
}
else
{
     
     int Dmin=static_cast<int>(Departure[i]*100)%100;
int cmin=static_cast<int>(Checkin[i][0]*100)%100;
if (cmin>Dmin)
{
    Departure[i]=Departure[i]-0.4;
}
double j=Departure[i]-Checkin[i][0];
    if(j>1.00 && j<12.00)
    {
        fees=checkfees(i,Checkin);
        
        cout<<setw(10)<<Passenger[i]<<setw(10)<<fees<<setw(10);
       if (checkfood(i,type))
       cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
    }
    else
    {
        continue;
    }
}
}
infile.close();
    system("pause");
	return 0;
}

double checkfees(int i, double CI[][3])
{
    double fees=0.00;
    if (CI[i][2]>5.00)
    CI[i][1]+=CI[i][2];
   if (CI[i][1]>10.00)
   fees=20.50;
   return fees;
    
}

bool checkfood(int i, char t[][3])
{
bool food=true;
if (t[i][1]=='N')
food=false;
return food;
}
