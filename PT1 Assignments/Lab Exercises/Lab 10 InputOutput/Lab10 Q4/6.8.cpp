//program 6.8
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream fdata1, fdata2;
fdata1.open("hasil.txt");
fdata2.open("lapor.txt");
fdata1 << "S" << 789 <<"," << 190 << endl;
cout << "terima kasih" << endl;
fdata2 << "Selamat datang ";
fdata1<<"***" << -3.4 << "CR" << endl;
fdata2<< "Ke FSKSM, UTM" << endl;
cout << "Jumpa lagi" << endl;
fdata1.close();
fdata2.close();

return 0;
}
