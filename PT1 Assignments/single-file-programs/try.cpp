#include <iostream>

using namespace std;

int main()
{
int a, d=1, c, b=2, e ; 
float p = 3.0, q;
a = b * d++;
c = ++a / 2 +d;
b += a + c %2;
d *= (b-1) / c;
p = c * p / 5;
e = --p + 2;
q = static_cast<float>(e/5) * d;

cout << "d is " << e<< endl;

	system("pause");
	return 0;
}
