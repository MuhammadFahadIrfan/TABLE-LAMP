#include <iostream>
using namespace std;

class tablelmp
{
  public:
  tablelmp()
  {
  this->on_off=OFF;
}
void pressswitch()
{
  on_off=(on_off==ON)? OFF:ON;

}
friend ostream& operator<<(ostream& o,const tablelmp& t );
private:
enum state{ON,OFF}on_off;
};
ostream& operator<<(ostream& o,const tablelmp& t)
{
  return (t.on_off==t.ON)?o<<"TABLE LAMP IS  ON"<<endl:o<<"TABLE LAMP IS OFF"<<endl;
};

