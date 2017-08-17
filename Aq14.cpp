#include <iostream>

using namespace std;

class Rational{
	int a;
	int b;
public:
	Rational(){
		a=0;
		b=0;
	}
	Rational(int first,int second){
		a=first;
		b=second;
	}
	void operator - ();
	void display(){
		cout<<a<<"  |   "<<b;
	}
};

void Rational::operator - (){
	a=-a;
	b=-b;
}

int main(){
	Rational R(3,4);
	R.operator - ();
}
