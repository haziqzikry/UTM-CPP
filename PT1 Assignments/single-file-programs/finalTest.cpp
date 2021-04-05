#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int NUM=5;
struct Students
{ 
        char name[20];
        float weight, height;
}; 
Students ss[NUM];
float showAverage()
{
    float average;
    float BMI;
for(int j=0; j<NUM; j++)
{
    BMI=ss[j].weight/pow(ss[j].height, 2.0);
    average+=BMI;
}
       return average/NUM;
}

void GetData()
{
   // Students ss[NUM];
    cout<<"Please insert 5 student's name, height and weight respectively"<<endl;
    for (int h=0; h<NUM; h++) 
    {   
        cout<<"Student "<<(h+1)<<" name is ";
        cin.getline(ss[h].name, 20);
        
          cout<<"Student "<<(h+1)<<" height in meter is ";
        cin>>ss[h].height;
          cout<<"Student "<<(h+1)<<" weight in kg is ";
         cin>>ss[h].weight;
cin.ignore();
    }
  
}

void DisplayData()
{
    cout<<setw(20)<<"NAME"<<setw(20)<<"Height"<<setw(20)<<"Weight"<<setw(20)<<"Description"<<endl;
 for (int h=0; h<NUM; h++)
 {   float BMI;
      cout<<setw(20)<<ss[h].name<<setw(20)<<ss[h].height<<setw(20)<<ss[h].weight;
      BMI=ss[h].weight/pow(ss[h].height, 2.0);
      if(BMI>18)
      {
          if(BMI<25)
          {
              cout<<setw(20)<<"You are ok!"<<endl;
          }
          else
          {
              BMI=ss[h].weight - (24 * pow(ss[h].height, 2.0));
              cout<<setw(20)<<"You need to lose "<<fixed<<setprecision(2)<< BMI<<"kg"<<endl;
          }
          
      }
      else
      {
          BMI= 18 * pow(ss[h].height, 2.0)-ss[h].weight;
          cout<<setw(20)<<"You need to gain "<<fixed<<setprecision(2)<< BMI<<"kg"<<endl;
      }
      
 }
}

int main()
{ 
       GetData();
       DisplayData();
       float av=showAverage();
       cout<<endl;
       cout<< "The average BMI of these 5 students is "<<fixed<<setprecision(2)<<av;

        return 0;
}