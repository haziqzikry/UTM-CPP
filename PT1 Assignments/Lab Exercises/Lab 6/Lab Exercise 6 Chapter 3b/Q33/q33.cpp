/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main()
{
    double weight, weightCnt, totWeight=0;
    int s_Num;
    cout<<"calcuate average and total weight";
    cout<<" of students\n\n";
    cout<<"Enter the numbers of students:";
    cin>>weightCnt;

    for(s_Num=0; s_Num<weightCnt;s_Num++)
    {
        cout<<"enter the weight of a students:";
        cin>>weight;
        totWeight+=weight;
    }

    cout<<"\n the average weight:"<<(totWeight/weightCnt);
    cout<<"\n the total weight:"<< totWeight;
    cout<<"\nEnd";


    return 0;
}