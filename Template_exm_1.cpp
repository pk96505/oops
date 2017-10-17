#include <iostream>

using namespace std;

template <typename T>
T square(T x){
	return x*x;
}

int main(void){
	int i=2,ii;
	float x=2.2,xx;
	double y=2.2,yy;

	ii = square<int>(i);
	cout<<i<<" : "<<ii<<endl;

	xx = square<float>(x);
	cout<<x<<" : "<<xx<<endl;

	yy = square<double>(y);
	cout<<y<<" : "<<yy<<endl;
	return 0;
}