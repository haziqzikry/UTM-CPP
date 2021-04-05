#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    double theta = 54.0;
    double rads = 0, x = 12.5, y, z;

    //convert degree to radians
    rads = theta * 3.14159 / 180;

    //calculate hypotenuse using trigonometric
    // ratios formula
    z = x / sin(theta);
    cout << "hypotenuse =" << z << endl;
    cout << floor(z) << endl;

    //calculate adjecent using Pythagoras' Theorem
    y = sqrt((pow(z,2))-(pow(x,2)));
    cout <<"adjacent =" << y << endl;
    a = ceil(y) ;

    cout << a << endl;
    cout << log10(a) << endl;

    return 0;
}