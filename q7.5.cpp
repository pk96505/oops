
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Point{
  float x;
  float y;
  float a;
  float r;
public:
  void convert_p_to_r(){
    a = atan(y/x);
    r = sqrt(x*x + y*y);
  }
  void convert_r_to_p(){
    x = r * cos(a);
    y = r * sin(a);
  }
  friend ostream & operator << (ostream &out, const Point &P);
  friend istream & operator >> (istream &in, Point &P);
};

ostream & operator << (ostream &out, const Point &P){
    out<<"  In degrees = "<<P.a<<endl;
    out<<"  In radians = "<<P.r<<endl;
    return out;
}

istream & operator >> (istream &in, Point &P){
    cout << "  Enter the value of x coordinate :";
    in >> P.x;
    cout << "  Enter the value of y coordinate :";
    in >> P.y;
    return in;
}
 
int main(){
  int c;
  Point p;
  
  cin >> p;
  p.convert();
  cout << p;
  return 0;
}