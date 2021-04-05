/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */
//C++ Program Question 1

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    char code;
    double price, total;
    int quant;

    cout << "Enter an item name : ";
    getline(cin, name);

    cout << "Enter the item code: ";
    cin >> code;

    cout << "Enter the price: ";
    cin >> price;

    cout << "Enter the quantity: ";
    cin >> quant;

    total = price * quant;

    cout << "\nYou entered the item name : " << name << endl;
    cout << "You entered the item code : " << code << endl;
    cout << "You entered the item price : RM" << fixed << setprecision(2) << price << endl;
    cout << "You entered the item quantity : " << quant << " unit" << endl;
    cout << "The total cost : RM" << fixed << setprecision(2) << total << endl;

    return 0;

}

