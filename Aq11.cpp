#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Integer{
	int number;
public:
	Integer( int n ){
		number = n;
	}

	Integer( const char *s ){
		char *str;
		int len = strlen(s);
		str = new char[len + 1];
		strcpy(str,s);
		number = atoi(str);
	}

	int value(){
		return number;
	}
};

int main(){
	int no1,no2;
	Integer No(90);
	Integer char_No("12345");
	no1 = No.value();
	cout<<"  No1 is : "<<no1<<endl;
	no2 = char_No.value();
	cout<<"  No2 is (char) : "<<no2<<endl;
	return 0;
}


