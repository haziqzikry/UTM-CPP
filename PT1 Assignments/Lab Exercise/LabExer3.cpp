//----------------------------------------------------------------------------------------------------
// An example of console program
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
// Notes on working with VSCode
//   You don't want to open any .cpp file directly in VSCode.
//   Instead, you want to open a folder first. Then open your .cpp file.
//   VSCode works mostly based on (what so called "workspace").
//   Which in this case, you need to work inside a folder.
//
//   So, for this program (console_example.cpp), in order to run it,
//     1). open the folder named "c:\vscode_cpp_workspace" into VSCode
//     2). open this program file (i.e. console_example.cpp) into VSCode
//     3). In debug mode choose "Console program"
//     4). Start debugging or running by pressing F5
//
// If you want to use your own folder, copy the folder ".vscode" from "vscode_cpp_workspace"
// and put it inside your own folder.
//
//----------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;


int getSizeOf(double []);

int main()
{
double list1[]={5,789,34,2,24,22,111,4552,156};

cout<<getSizeOf(list1)<<" "<< sizeof(list1);

return 0;
}



int getSizeOf(double arr[]){

int tempo=sizeof(arr);

return tempo;
}