/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include<iostream>
using namespace std;

int main(){
    int weightCnt=0;
    double weight, totWeight=0;
    cout<<"Calculate the Average and Total Weight";
    cout<<" of 5 Students\n\n";

    while(weightCnt<5){
        cout<<"Enter the weight of a student: ";
        cin>>weight;
        totWeight+=weight;
        weightCnt++;
    }
    cout<<"\n\nYou have "<<weightCnt<<" weights.";
    cout<<"\nThe Average Weight: "<<(totWeight/weightCnt);
    cout<<"\nThe Total Weight: "<<totWeight;
    cout<<"\n\nEnd of Program\n";
    system("pause");
    return 0;
}