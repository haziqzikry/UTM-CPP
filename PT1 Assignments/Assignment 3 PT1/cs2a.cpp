#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	bool cont;
	string text[10];
	string name[10];
	string temp2;
	char temp[10];
	double weight[10];
	double height[10];
	ifstream infile;
	infile.open("CS2.txt");
	
	for (int i = 0; i < 10; i++)
		getline(infile, text[i]);	
	
	for (int i = 0; i < 10; i++)
	{
		cont = true;
		for (int j = 0; j <= text[i].length(); j++)
		{
			if(isalpha(text[i][j]) || (isspace(text[i][j]) && isalpha(text[i][j+1])))
				name[i] = name[i] + text[i][j];
			else if (isdigit(text[i][j]) || text[i][j]== '.')
			{
				temp2 = text[i][j];
				strcat(temp, temp2.c_str());
			}
			else if (isspace(text[i][j]))
			{
				weight[i]= atof(temp);
				strcpy(temp,"");
			}
			else
			{
				height[i] = atof(temp);
				strcpy(temp,"");
				cont = false;
			}	
		}		
	}
}
