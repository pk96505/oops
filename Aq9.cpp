#include <iostream>

using namespace std;

class Box{
		float length;
		float breath;
		float height;
	public:
		Box(float l,float b,float h){
			length=l;
			breath=b;
			height=h;
		}

		Box(float l,float b){
			length=l;
			breath=b;
			height=10;
		}

		float volume(){
			return (length*breath*height);
		}
};

int main(){
	float vol1,vol2;
	float l,b,h;
	cout<<"  Enter the length of box : ";
	cin>>l;
	cout<<"  Enter the breath of box : ";
	cin>>b;
	cout<<"  Enter the height of box : ";
	cin>>h;

	Box B1(l,b,h),B2(l,b);
	vol1=B1.volume();
	vol2=B2.volume();
	cout<<"  Volume of Box(B1) : "<<vol1<<endl;
	cout<<"  Volume of Box(B2) whose height is 10 : "<<vol2<<endl;

	return 0;
}