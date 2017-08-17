#include <iostream>

using namespace std;

class C {
	char  c[30];
public:
	C(char *p){
		c=&p;
	}
	void display(){
		cout<<c;
	}
};

int main(){
	C c("Pankaj");
	c.display();
	return 0;
}