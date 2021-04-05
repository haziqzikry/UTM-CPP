/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
using namespace std;

// function prototype
int calculateBalance(int totalcoin); //function to calculate balance
int getCoin(); // function to read the value of a coin
void calculateCoin(int &totalCoin, int coin); // function to calculate total coins
int coin,totalcoin, balcoin; // global variables

int main(){

int total = 0, price = 120; // local variables 
int coin, balance; // local variables 

    // do...while loop
    do{
        coin = getCoin();  // call function getCoin()
        calculateCoin(total,coin); // call function calculateCoin ()
    }
    while (total < price);

    balance = calculateBalance(total); // call calculateBalance ()

    if(balance > 0){
        cout << "Please collect your balance." << endl; // displays balance if more than 0
    }
    cout << "TERIMA KASIH." << endl; 
    
    system ("pause") ;
    return 0;
}

int getCoin(){
    cout << "Enter the value of coins: "; // ask the user to enter the value of coin
    cin >> coin;

    return coin;
}

void calculateCoin(int &totalCoin, int coin){
    totalCoin = coin + totalCoin;
    cout << "The total coin is: " << totalCoin << endl; // display the total coins
}

int calculateBalance(int totalcoin){
    balcoin = totalcoin - 120;

    cout << " \nYour balance coins is: " << balcoin << endl; // display balance of coins
    return balcoin ;
}
