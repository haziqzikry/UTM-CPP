#include <iostream>

using namespace std;
union s{
    char letter;
    int number;
    double bla;
};
int main()
{
    s g;
   g.letter='A';
   // g.number=1597000241;
  // g.number=6422337;
  //g.number=1597000331;
  //   g.bla=1.1244284592e-8;
    // cout<<g.bla<<endl;
  // g.bla=1.7900466790147244e-307;
  // 
//g.number=*(int*)&g.bla;
   // g.number=g.bla;
 //g.bla=*(double*)&g.number;
  // cout<<g.letter<<" "<<g.number<<" "<<g.bla;
cout<<g.number;
    return 0;
}
