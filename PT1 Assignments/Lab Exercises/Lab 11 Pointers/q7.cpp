#include <iostream>
using namespace std;

int main ()
{
int a = 3;
int b = 8;
int c = 2;
int x = 5;
int y = -5;
int ax[20] = {2,3,1,7,12,35,-6,77,-8,9};

int *ip;
int *ix;
ip = new int[5];
for (a =0;a<5; a++)
	cout << *(ip + a );
*ip = * ax;
ix = ip + 10;
a = *ix;
*(++ix) = *(ax + 6);
b = *ix;
c = *(ax + 6);
x = *ix *= ax[4];

cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
cout << "ax[6] = " << ax[6] << endl;
cout << "ax[16] = " << ax[16] << endl;
cout << "*ip = " << *ip << endl;

system ("pause");
return 0;
}
