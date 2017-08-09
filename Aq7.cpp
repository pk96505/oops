#include<iostream>
#include<stdlib.h>

using namespace std;

			void volume(float l,float b, float h);
			void volume(float r,float h);
			void volume(float l);

	int main(){
		int c;
		float l,b,h,r;
		do{
			cout<<endl<<"......................................."<<endl;
			cout<<endl<<"   1.To calculate volume of cube."<<endl;
			cout<<"   2.To calculate volume of cuboid."<<endl;
			cout<<"   3.To calculate volume of cylinder."<<endl;
			cout<<"   4.Exit."<<endl;
			cout<<endl<<"......................................."<<endl;
			cout<<"     Enter your choice: ";
			cin>>c;
			switch(c){
				case 1:
				cout<<"   Enter the side of cube: ";
				cin>>l;
				volume(l);
				break;
				case 2:
				cout<<"   Enter the length of cuboid: ";
				cin>>l;
				cout<<"   Enter the breath of cuboid: ";
				cin>>b;
				cout<<"   Enter the height of cuboid: ";
				cin>>h;
				volume(l,b,h);
				break;
				case 3:
				cout<<"   Enter the radius of cylinder: ";
				cin>>r;
				cout<<"   Enter the height of cylinder: ";
				cin>>h;
				volume(r,h);
				break;
				case 4:
				exit(0);
			}
		}while(true);
		return 0;
	}

	void volume(float l,float b,float h){
		float volume;
		volume=l*b*h;
		cout<<endl<<"......................................."<<endl;
		cout<<endl<<"     Volume of cuboid is: "<<volume<<endl;
		cout<<endl<<"......................................."<<endl;
	}

	void volume(float r,float h){
		float volume;
		volume=(3.14*r*r*h);
		cout<<endl<<"......................................."<<endl;
		cout<<endl<<"      Volume of cylinder is: "<<volume<<endl;
		cout<<endl<<"......................................."<<endl;
	}

	void volume(float l){
		float volume;
		volume=l*l*l;
		cout<<endl<<"......................................."<<endl;
		cout<<endl<<"       Volume of cube: "<<volume<<endl;
		cout<<endl<<"......................................."<<endl;
	}