#include <iostream>

using namespace std;

class Box{
		float length;
		float breath;
		float height;
	public:
		Box(){
			height=10.0;
		}

		float volume(float l, float b){
			length=l;
			breath=b;
			
			return (length*breath*height);
		}

/*		float volume(float l,float b,float h=10){
			length=l;
			breath=b;
			height=h;
			return (l*b*h);
		}
*/
};

int main(){
	Box B1,B2;
	float l,b,h,vol1,vol2;
	cout<<"  Enter the dimension of Box : ";
	cout<<endl<<"  Length : ";
	cin>>l;
	cout<<endl<<"  Breath : ";
	cin>>b;
	cout<<endl<<"  Height : ";
	cin>>h;
	vol1=B1.volume(l,b);
	cout<<"  Volume is : "<<vol1;

	return 0;
}