#include <iostream>
#include <cstdlib>

using namespace std;

class complex{
	float real;
	float imag;
public:
	complex(){
		real = 0.0;
		imag = 0.0;
	}
	complex(complex &c){
		real = c.real;
		imag = c.imag;
	}
	friend ostream & operator << (ostream &out, const complex &c);
	friend istream & operator >> (istream &in, complex &c);
	complex operator + ( complex &c );
	complex operator * ( complex &m );
	complex operator - ( complex &s );
	complex operator / ( complex &d );
};

ostream & operator << (ostream &out, const complex &c){
	out<<c.real<<" + "<<c.imag<<"i"<<endl;
	out<<"******************************************"<<endl<<endl;
}

istream & operator >> (istream &in, complex &c){
	cout<<"  Enter real part: ";
	in>>c.real;
	cout<<"  Enter imaginary part: ";
	in>>c.imag;
}

complex complex::operator + ( complex &c ){
	complex add;
	add.real = real + c.real;
	add.imag = imag + c.imag;
	return add;
}

complex complex::operator * ( complex &m ){
	complex mul;
	mul.real = real * m.real;
	mul.imag = imag * m.imag;
	return mul;
}

complex complex::operator - ( complex &s ){
	complex sub;
	sub.real = real - s.real;
	sub.imag = imag - s.imag;
	return sub;
}

complex complex::operator / ( complex &d ){
	complex div;
	div.real = real / d.real;
	div.imag = imag / d.imag;
	return div;
}

int main(){
	int c;
	complex c1,c2,c3;
	cin>>c1;
	cout<<endl<<"******************************************"<<endl;
	cout<<"  First complex number is (c1): ";
	cout<<c1;
	cin>>c2;
	cout<<endl<<"******************************************"<<endl;
	cout<<"  Second complex number is (c2): ";
	cout<<c2;
	do{
		cout<<"  1.Addition of two complex numbers."<<endl;
		cout<<"  2.Multiply of two complex numbers."<<endl;
		cout<<"  3.Subtrect one complex number form other complex number."<<endl;
		cout<<"  4.Divide one complex number by other complex number."<<endl;
		cout<<"  5.Use the copy constructor."<<endl;
		cout<<"  6.Exit."<<endl;
		cout<<endl<<"  Enter your choice: ";
		cin>>c;
		switch(c){

			case 1:
			c3 = c1 + c2;
			cout<<endl<<"******************************************"<<endl;
			cout<<"  First complex number is (c1): ";
			cout<<c1;
			cout<<"  Second complex number is (c2): ";
			cout<<c2;
			cout<<"  Addition of c1 and c2 is: ";
			cout<<c3;
			break;

			case 2:
			c3 = c1 * c2;
			cout<<endl<<"******************************************"<<endl;
			cout<<"  First complex number is (c1): ";
			cout<<c1;
			cout<<"  Second complex number is (c2): ";
			cout<<c2;
			cout<<"  Multiplication of c1 and c2 is: ";
			cout<<c3;
			break;

			case 3:
			c3 = c1 - c2;
			cout<<endl<<"******************************************"<<endl;
			cout<<"  First complex number is (c1): ";
			cout<<c1;
			cout<<"  Second complex number is (c2): ";
			cout<<c2;
			cout<<"  Subtraction of c1 - c2 : ";
			cout<<c3;
			break;
			
			case 4:
			c3 = c1 / c2;
			cout<<endl<<"******************************************"<<endl;
			cout<<"  First complex number is (c1): ";
			cout<<c1;
			cout<<"  Second complex number is (c2): ";
			cout<<c2;
			cout<<"  c1/c2 : ";
			cout<<c3;
			break;
			
			case 5:
			c3 = c1;
			cout<<endl<<"******************************************"<<endl;
			cout<<"  First complex number is (c1): ";
			cout<<c1;
			cout<<"  Second complex number is (c2): ";
			cout<<c2;
			cout<<"  Copy constructor of (c1)  c3 : ";
			cout<<c3;
			break;
			
			case 6:
			cout<<"  Thank you Have a nice day......"<<endl<<endl;
			exit(0);
			break;
			default:
			cout<<"  You entered a wrong choice. Please try again leater.";
			cout<<endl<<"********************************************************"<<endl<<endl;
			exit(0);
			break;
		}
	}while(true);
}