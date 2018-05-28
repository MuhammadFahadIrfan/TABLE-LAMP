#include <iostream>
#include "adjtable.h"
using namespace std;

int main()
{
  adjtable *mylmp=new adjtable();
  cout<<*mylmp<<endl; //OBJECT KO PRINT KRWA RHY HYN
  //mylmp.print(cout);
  mylmp->pressswitch();
  mylmp->dim();
   mylmp->print(cout);
  system ("pause");
}