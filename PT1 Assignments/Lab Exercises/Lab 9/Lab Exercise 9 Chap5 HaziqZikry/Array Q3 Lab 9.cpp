/* Name: Mohamad Haziq Zikry Bin Mohammad Razak
   Matric No. : A20EC0079 */

#include <iostream>
using namespace std;

int main(){
    double marks[5];

    for (int i = 0; i < 5; ++i) {
        cout << marks[i] << "  ";
    }
    cout << "\nEnter the marks :\n";
    cin >> marks[3];

    for (int i = 0; i < 5; ++i) {
        cout << marks[i] << "  ";
    }

    cout << "\n ";
    marks[4] = marks[3] + 10;

    for (int i = 0; i < 5; ++i) {
        cout << marks[i] << "  ";
    }
}
