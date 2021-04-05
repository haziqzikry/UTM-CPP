// Program 6.5
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    float f;
    double d;
    char s[100];

    cout << "input one integer: ";
    cin >> n;

    cout << n << endl;
    cout << setw(6) << n << endl;
    cout << setw(-6) << n << endl;

    cout << "Input one string: ";
    cin >> s;
    cout << s << endl;
    cout << setw(20) << s << endl;
    cout << left << setw(20) << s << endl;

    cout << "Input one floating number: ";
    cin >> f;
    cout << fixed << f << endl;

    cout << "Input one double number: ";
    cin >> d;
    cout << d << endl;
    cout << setprecision(2) << d << endl;
    cout << setw(10) << setprecision(2) << d << endl;

    return 0;
}