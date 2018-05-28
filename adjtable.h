#include <iostream>
#include "tablelmp.h"
using namespace std;

class adjtable:public tablelmp
{
  public:
  adjtable():tablelmp()//we call here base constructor
  {
    this->brig=1.00;
  }
  void dim()
  {
    if(this->brig>0.1)
    {
      this->brig=this->brig-0.1;
    }
  }
  void print(ostream& o)
  {
    o<<*this<<"with brightness"<<this->brig<<endl<<endl;
  }

  private:
  float brig;
};
