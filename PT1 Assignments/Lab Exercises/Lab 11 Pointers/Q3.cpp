// Name: Mohamad Haziq Zikry Bin Mohammad Razak
// Matric No: A20EC0079
// Program that that calculates the total and the average of marks for any number of subjects taken by a student.
// The marks are stored in a dynamically allocated array
#include <iostream>
using namespace std;

int main(){

    // declare variables
    int num;
    double total, average;

    double *mark; // dynamically allocate an array

    // Get the number of subjects taken by the student
    cout << "Please enter number of subjects taken: ";
    cin >> num;

    //Dynamically allocate an array large enough to hold
    mark = new double[num];

    // Get the marks of each subject
    cout << "\nPlease enter the marks of each subject.\n\n";
    for(int i = 0; i < num; i++){
        cout << "Subject " << (i+1) << " :   ";
        cin >> mark[i];

        // calculate the total marks
        total += mark[i];
    }

    // Calculates the average marks
    average = total/num;

    // Display the results
    cout << "\nTotal of Marks:   " << total << endl;
    cout << "\nAverage : " << average << endl;

    // Free dynamically allocated memory
    delete [] mark;
    mark = 0; //make mark point to null

    system ("pause");
    return 0;
}