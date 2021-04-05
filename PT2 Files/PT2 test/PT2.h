#ifndef PT2_H
#define PT2_H
#include<cstring>
#include<iostream>
using namespace std;
class PT2
{
 private:
  std::string name;
  //char name[10];
  int a;
 public:
  void getA(int);
  //void getName(string);
  void getName(std::string);
  int getC();
  std::string getD();
};
#endif
