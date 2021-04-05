// Program 4.6
#include <iostream>
using namespace std ;

char getGrade (int score);
float calculatePoint (int score) ;
bool excellent (float point) ;

int main ()
{
    int finalScore ;
    float scorePoint;
    char letterGrade;
    cout << "\n Enter your score: ";
    cin >>  finalScore;
    letterGrade = getGrade(finalScore);
    scorePoint = calculatePoint(finalScore);
    cout << "\nYour letter grade is: " << letterGrade;
    cout << "\nYour score point is: " << scorePoint;
    if (excellent (scorePoint))
        cout << "\nCongratulation...! You are excellent.";
    else 
        cout << "\nTry harder next semester..!";


     cout<<"\n\nEnd of program";
     system ("pause") ;
     return 0;
}

char getGrade(int score)
{
    char grade;
    if (score >= 80)
        grade = 'A';
    else if (score >= 70)
        grade = 'B';
    else if (score >= 60)
        grade = 'C';
    else if (score >= 50)
        grade = 'D';
    else
        grade = 'E';
    return grade;
}

float calculatePoint (int score)
{
	if (score >= 80)
	return 4.0;
	else if (score >=70)
	return 3.0;
	else if (score >= 60)
	return 2.0;
	else if (score >= 50)
	return 1.0;
	else
	return 0.0;
}

bool excellent (float point)
{
    if (point >= 3.0)
        return true;
    else
        return false;

}
