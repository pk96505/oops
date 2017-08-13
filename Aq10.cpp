#include <iostream>

using namespace std;

class Length {
	int *ptr;
public:
	Length( int len );
	Length(const Length &obj);
	~Length();
	int getLength();
};

Length::Length( int len){
	cout<<"  Normal constructor allocation ptr."<<endl;
	ptr = new int;
	*ptr = len;
}

Length::Length( const Length &obj){
	cout<<"  Copy constructor allocating ptr."<<endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

Length::~Length(){
	cout<<"  Freeing memory."<<endl;
	delete ptr;
}

int Length::getLength(){
	return *ptr;
}

void display(Length obj){
	cout<<"  Length : "<<obj.getLength()<<endl;
}

int main(){
	Length line1(20);
	Length line2 = line1; //It calls copy constructor
	display(line1);
	display(line2);
	return 0;
}

