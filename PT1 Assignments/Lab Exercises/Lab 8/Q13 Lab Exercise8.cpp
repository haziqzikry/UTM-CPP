
/* Name: Mohamad Haziq Zikry Bin Mohammad Razak */
/* Matrics Number: A20EC0079 */

#include <iostream>
using namespace std;

// function prototype
float calculateTotal (float a,float b,float c,float d,float e); // function to calculate total marks for the student based on the mark distribution table
string assignGrade (int) ; // function to determine and return student's grade

// main function
int main ()
{
char studentName [69]; // declare local variables
float test, assignments, quiz, lab, finals , totalmark; // declare local variables
string grade ; // declare local variables

    cout << "Enter Student's Name: "; //ask the user to input student's name 
    cin >> studentName ; 
    cout << "Test 1 marks:"; //ask the user to input student's test 1 marks
    cin >> test ; 
    cout << "Assingnment marks:"; //ask the user to input student's asssignments marks
    cin >> assignments ; 
    cout << "Quiz marks:"; //ask the user to input student's quiz marks 
    cin >> quiz ; 
    cout << "Lab Work marks:"; //ask the user to input student's lab marks
    cin >> lab ; 
    cout << "Final exams marks:"; //ask the user to input student's final exam marks
    cin >> finals; 
    

    totalmark = calculateTotal (test, assignments, quiz, lab, finals) ; // call function float calculateTotal ()
    cout << "\nTotal Mark: " << totalmark << endl ; // display total marks
    grade = assignGrade (totalmark) ; // call function string assignGrade ()
    cout << "Grade: " << grade << endl ; // display final grade
    
    system ("pause") ;
    return 0 ;
}

float calculateTotal (float a,float b,float c,float d,float e) //function to calculate each mark 
{
    a = 0.20 * a;
    b = 0.30 * b;
    c = 0.10 * c;
    d = 0.10 * d;
    e = 0.30 * e;
 return  a + b + c + d + e ; // return expected marks
}

string assignGrade (int y) // function to determnine the grade
{
string z ;
if  (y>= 90 && y <= 100)
    z ="A+";
else if  (y>= 80 && y <= 89)
    z ="A";
else if  (y>= 75 && y <= 79)
   z = "A-";
else if  (y>= 70 && y <= 74)
   z = "B+";
else if  (y>= 65 && y <= 69)
   z = "B";
else if  (y>= 60 && y <= 64)
   z = "B-";
else if  (y>= 55 && y <= 59)
   z = "C+";
else if  (y>= 50 && y <= 54)
   z = "C";
else if (y>= 45 && y <= 49)
   z = "C-";
else if  (y>= 40 && y <= 44)
   z = "D+";
else if  (y>= 35 && y <= 39)
   z = "D" ;
else if  (y>= 30 && y <= 34)
   z = "D-";
else if  (y>= 00 && y <= 29)
   z = "E";
else 
    z = "Invalid Grade" ; 
return z ; // return the expected grade
}