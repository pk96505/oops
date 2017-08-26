
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Polar;

class Rectangle{
  double x;
  double y;
public:
  	friend Polar convert_p_to_r( Polar &P);
  	friend Rectangle convert_r_to_p( Rectangle &R);
  	friend ostream & operator << (ostream &out, const Rectangle &P);
  	friend istream & operator >> (istream &in, Rectangle &P);
};

class Polar{
	double a;
	double r;
public:
	friend Polar convert_p_to_r( Polar &P);
	friend Rectangle convert_r_to_p( Rectangle &R);
	friend ostream & operator << (ostream &out, const Polar &P);
  	friend istream & operator >> (istream &in, Polar &P);
};

Polar convert_p_to_r( Polar &P ){
    Rectangle R;
    R.x = P.r * cos (P.a);
    R.y = P.r * sin (P.a);
    return R;
}

Rectangle convert_r_to_p( Rectangle &R ){
	Polar P;
	P.a = atan(R.y/R.x);
    P.r = sqrt(R.x*R.x + R.y*R.y);
    return P;
}

ostream & operator << (ostream &out, const Rectangle &R){
    out<<"  x coordinate = "<<R.x<<endl;
    out<<"  y coordinate = "<<R.y<<endl;
    return out;
}

istream & operator >> (istream &in, Polar &P){
    cout << "  Enter the value in degrees :";
    in >> P.a;
    cout << "  Enter the value in radians :";
    in >> P.r;
    return in;
}

ostream & operator << (ostream &out, const Polar &P){
    out<<"  In degrees = "<<P.a<<endl;
    out<<"  In radians = "<<P.r<<endl;
    return out;
}

istream & operator >> (istream &in, Rectangle &P){
    cout << "  Enter the value of x coordinate :";
    in >> P.x;
    cout << "  Enter the value of y coordinate :";
    in >> P.y;
    return in;
}
 
int main(){
  int c;
  cout<<"  1.Convert rectangle to polar."<<endl;
  cout<<"  2.Convert polar to rectangle."<<endl;
  cout<<"  Enter your choice: ";
  switch(c){
  	case 1:
  	Rectangle R;
  	cin>>R;
  	Rectangle A;
  	A = convert_r_to_p(R);
  	cout<<A;
  	break;
  	case 2:
  	Polar P;
  	cin>>P;
  	Polar A1;
  	A1 = convert_p_to_r(P);
  	cout<<A1;
  	break;
  }
}