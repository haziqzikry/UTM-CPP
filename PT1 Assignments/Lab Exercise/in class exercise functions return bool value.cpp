#include <iostream>
using namespace std;
void try1(int p);
int try3(int r);
int main()
{ int a=2;
cout << a <<endl;
try1(a);
cout << a <<endl;
int b=3;
cout << b <<endl;
int c=4;
try3(c);
cout << c <<endl;
c=try3(c);
cout << c <<endl;
cout << try3(5) <<endl;
return 0;}
void try1(int p)
{
p++;
cout << p <<endl;
}
int try3(int r)
{    system ("pause") ;

return r*r;
}