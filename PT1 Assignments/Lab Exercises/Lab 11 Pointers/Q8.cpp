//Program 7.12
#include <iostream>
using namespace std ;

int* myfunction (int *y) {
    int* px = y ;
    int temp = 12;
    y[4] = y[0];
    y[0]= temp;

    for (int j=0;j<5;j++)
        cout <<y[j]<<" ";
        cout <<endl;
        return px;
}

int main () {
    int* pi, *x;
    int a[]= {3,4,5,6,7};
    x=a;
    pi = myfunction (x);
    cout << "*pi = " << *pi << endl;
    for (int j=0;j<5;j++)
        cout <<a[j]<<" ";

    system ("pause");
    return 0;
}