/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "\n\t Multiplication Tables";
    cout << "\n_\n\n";
    //print multiplication table for 1 to 2
    for (int n = 1; n <= 2; n++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(4) << j * 1;
        }
        cout << endl;
    }
    cout << "\nEnd of Program";
    system ("pause") ;
    return 0;
}