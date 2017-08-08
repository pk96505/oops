#include <iostream>

using namespace std;

void sort (int& p, int& n){
	int temp;
	if(p<n)
	temp=0;
	else
	{
	temp=p;
	p=n;
	n=temp;
	}
}

int main ()
{
	int a,b;
	cout<<endl<<"............................";
	cout<<endl<<"     Enter first no.: ";
	cin>>a;
	cout<<endl<<"     Enter second no.: ";
	cin>>b;
	cout<<endl<<"............................";
	sort(a,b);
	cout <<endl<<"     After sorting : " << a <<", "<< b;
	cout<<endl<<"............................"<<endl;
  return 0;
}
