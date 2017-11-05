#include <iostream>

using namespace std;

template <typename T>
T reverse(T a[], int x){
	T temp;
	int i,j;
	cout<<"  Before reverse : "<<endl;
	cout<<"  ";
	for(int t=0;t<x;t++){
		cout<<a[t]<<" ";
	}
	cout<<endl;
	cout<<"  After reverse : "<<endl;
	for(i=0,j=x;i<=x/2;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"  ";
	for(int k=1;k<x+1;k++){
		cout<<a[k]<<" ";
	}
	cout<<endl;
}

int main(){
	int b[6]={1,2,3,4,5,6};
	float c[6]={1.1,2.2,3.3,4.4,5.5,6.6};
	double d[6]={1.2,2.3,3.4,4.5,5.6,6.7};
	reverse<int>(b,6);
	reverse<float>(c,6);
	reverse<double>(d,6);
}