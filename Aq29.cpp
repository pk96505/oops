#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a;
	float result;
	cout<<"  Enter a number for which you want yo calculate the root : "<<endl;
	cin>>a;
	try{
 		if(a>0){
 			result=sqrt(a);
 			cout<<"  Squre root of the given number is : "<<result<<endl;
 		}
 		else{
 			throw(a);
 		}
	}
	catch(int i){
 		cout<<"Exception caught : Beacause  is a negative number. So we can't find the root of negative number."<<endl;
	}
	cout<<"END";
	return 0;
}