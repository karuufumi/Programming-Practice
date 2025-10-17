#include <iostream>
using namespace std;



class ClockType
{
public:
    ClockType(int, int, int);
    ClockType();    
    void printTime() const;
    void setTime(int, int, int);
    
    void getTime(int&, int&, int&) const;
    

private:
    int hr;
    int min;
    int sec;
};

void ClockType::printTime() const
{
   if (hr < 10)
      cout << "0";
   cout << hr << ":";
   if (min < 10)
      cout << "0";
   cout << min << ":";
   if (sec < 10)
      cout << "0";
   cout << sec;
}

// TODO

void ClockType::getTime(int& h, int& m, int& s) const {
    h = this->hr;
    m = this->min;
    s = this->sec;
}
void ClockType::setTime(int h, int m, int s)  {
    
    h>= 24? this->hr = h-24 : this->hr = h;
    m >= 60? this->min = m-60: this->min = m;
    s >= 60? this->sec = s -60: this->sec = s;
}