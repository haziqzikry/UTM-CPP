//Program 6.6 
#include <iostream>
#include <fstream> 
using namespace std;

int main ()
{
    float val1, val2, val3, val4;
    float average ; // initialize for average
    fstream inData;
    fstream outData;

   	inData.open ("DataIn.txt",ios::in);
    outData.open ("DataOut.txt", ios::out);

    inData >> val1 >> val2 >> val3 >> val4 ;
    average = (val1 + val2 + val3 + val4)/4 ; // average formula
    outData  << val4 << endl ;
    outData  << val3 << endl ;
    outData  << val2 << endl ;
    outData  << val1 << endl ;
    outData << average << endl ; // outputs the average
    return 0 ;

}

