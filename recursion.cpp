#include <iostream>

using namespace std;

long fact(int);

int main(){
	int no;
	cout<<"  Enter the number to calculate factorial : ";
	cin>>no;
	cout<<"  Factorial of "<<no<<" is : "<<fact(no)<<endl;
}

long fact(int n){
	int factorial;
	if(n==1)
		return 1;
	else
		factorial = n*fact(n-1);
	return factorial;
}