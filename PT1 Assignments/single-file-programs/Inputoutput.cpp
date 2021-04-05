#include <iostream>

using namespace std;

int main()
{
char choice;
float price=0;
int item=0;
cout<<"Please enter the item id";
	cin>>choice;
while(choice=='A' || choice=='O' ||choice=='L' ||choice=='S' ||choice=='J'){
	
	switch (choice){
	case 'A' :
	price+=2.00;
	item++;
	break;
	case 'O' :
	price+=2.50;
	item++;
	break;
	case 'L' :
	price+=1.80;
	item++;
	break;
	case 'S' :
	price+=3.00;
	item++;
	break;
	case 'J' :
	price+=2.20;
	item++;
	break;
	}
	cout<<"Please enter the item id";
	cin>>choice;	
}
if (price>10)
{if ( item<5)
price= price - (0.2 * price);}

cout<<"The total price is: RM"<<price;
	system("pause");
	return 0;
}