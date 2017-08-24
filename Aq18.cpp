#include <iostream>

using namespace std;

class Base{
protected:
	float length;
	float breadth;
	float area;
};

class Derived : protected Base{
public:
	friend ostream & operator << (ostream &out, const Derived &D);
	friend istream & operator >> (istream &in, Derived &D);
	void volume(){
		area = length*breadth;
		//return area;
	}
};

ostream & operator << (ostream &out, const Derived &B){
	out << "  Area is : "<<B.area<<endl;
	return out;
}

istream & operator >> (istream &in, Derived &B){
	cout<<"  Enter length : ";
	in >> B.length;
	cout<<"  Enter breadth : ";
	in >> B.breadth;
	return in;
}

int main(){
	Derived D;
	cin>>D;
	D.volume();
	cout<<D;
	return 0;
}



