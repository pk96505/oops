#include <iostream>

using namespace std;

class complex{
	int real;
	int imag;
public:
	friend ostream & operator << (ostream & out, const complex & c);
	friend istream & operator >> (istream & in, complex &c); 
};

ostream & operator << (ostream & out, const complex &c){
	out<<c.real;
	out<<" + i"<<c.imag<<endl;
	return out;
}

istream & operator >> (istream & in, complex &c){
	cout<<"  Enter real part : ";
	in>>c.real;
	cout<<"  Enter imagenory part : ";
	in>>c.imag;
	return in;
}

int main(){
	complex c1;
	cin>>c1;
	cout<<"  The complex object is : ";
	cout<<c1;
	return 0;
}