#include <iostream>
#include <cstdlib>

using namespace std;

class Integer{
	int number;
public:
	Integer( int n ){
		number = n;
	}

	Integer( char *no ){
		no = new int;
		number = atoi(*no);
	}

	int value(){
		return number;
	}
};

int main(){
	int no1,no2;
	Integer No(90);
	Integer char_No("1234");
	no1 = No.value();
	cout<<"  No1 is : "<<no1<<endl;
	no2 = char_No.value();
	cout<<"  No2 is (char) : "<<no2<<endl;
	return 0;
}


