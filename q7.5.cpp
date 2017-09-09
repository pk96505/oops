
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

class Polar;

class Rectangle{
  double x;
  double y;
public:
  	friend Rectangle convert_p_to_r( Polar &P);
  	friend Polar convert_r_to_p( Rectangle &R);
  	friend ostream & operator << (ostream &out, const Rectangle &P);
  	friend istream & operator >> (istream &in, Rectangle &P);
};

class Polar{
	double a;
	double r;
public:
	friend Rectangle convert_p_to_r( Polar &P);
	friend Polar convert_r_to_p( Rectangle &R);
	friend ostream & operator << (ostream &out, const Polar &P);
  friend istream & operator >> (istream &in, Polar &P);
};

Rectangle convert_p_to_r( Polar &P ){
  Rectangle R;
  R.x = P.r * cos (P.a);
  R.y = P.r * sin (P.a);
  return R;
}

Polar convert_r_to_p( Rectangle &R ){
	Polar P;
	P.a = atan(R.y/R.x);
  P.r = sqrt(R.x*R.x + R.y*R.y);
  return P;
}

ostream & operator << (ostream &out, const Rectangle &R){
    out<<"  Your answer in Radians is : "<<endl;
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
    out<<"  Your answer in Polar is : "<<endl;
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
  do{
    cout<<endl<<"  1.Convert rectangle to polar."<<endl;
    cout<<"  2.Convert polar to rectangle."<<endl;
    cout<<"  3.Exit."<<endl<<endl;
    cout<<"  Enter your choice: ";
    cin>>c;
    switch(c){
  	 case 1:
  	  Rectangle R;
  	  cin>>R;
  	  Polar P1;
  	  P1=convert_r_to_p(R);
  	  cout<<P1;
  	  break;
  	   
      case 2:
  	  Polar P;
  	  cin>>P;
  	  Rectangle R1;
  	  R1=convert_p_to_r(P);
  	  cout<<R1;
  	  break;

      case 3:
      exit(0);
      break;

      default :
      cout<<"  You enter a worng choice. Please try again later or select correct choice."<<endl;
    }
  }while(true);
}