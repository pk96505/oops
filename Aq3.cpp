#include <iostream>

using namespace std;

void prevnext (int &x, int& prev, int& next)
	{
  	prev = x-1;
  	next = x+1;
}

int main (){
  	int a, b, c;
	cout<<endl<<"    .............................";
	cout<<endl<<"     Enter a Number: ";
	cin>>a;
	prevnext(a, b, c);
  	cout <<endl<<"    Previous=" << b << ",  Next=" << c;
	cout<<endl<<"    .............................."<<endl;
  	return 0;
}


	
	
