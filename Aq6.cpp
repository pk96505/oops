#include<iostream>

using namespace std;

	class KILOS;

	class POUNDS{
	 	int pounds;
  		int ounces;
	public:
 		void getdata();
 		void display();
	friend POUNDS add ( POUNDS & , KILOS & );
	};

	class KILOS{ 
		int kg;
  		int grams;
 	public :
 		void getdata();
	friend POUNDS add ( POUNDS & , KILOS &);
	};

	POUNDS add (POUNDS &x ,KILOS &y){ 
		POUNDS p;
	  	p.ounces=16*x.pounds + x.ounces;
  		p.ounces+= (1000*y.kg + y.grams )/ 28;
  		p.pounds = p.ounces /16;
  		p.ounces = p.ounces % 16;
  		return p;
  	}


	int main(){
 		KILOS k;
 		POUNDS p;
 		k.getdata();
 		p.getdata();
 		POUNDS total;
 		total = add(p,k);
 		total.display();
 	}

	void KILOS::getdata(){
                        cout<<endl<<"........................................";
                        cout<<endl<<"     Enter the values in Kilogram: ";
                        cin>>kg;
                        cout<<endl<<"     Enter the value of grams: ";
                        cin>> grams;
                        cout<<"........................................"<<endl;
	}

	void POUNDS::getdata (){
                        cout<<endl<<"........................................";
                        cout<<endl<<"     Enter the value in pounds: ";
                        cin>>pounds;
                        cout<<endl<<"     Enter the value in ounces: ";
                        cin>>ounces;
                        cout<<"........................................";
                }
         void POUNDS::display(){
                        cout<<endl<<"........................................"<<endl;
                        cout<<"   Total in Pounds: "<<pounds<<" and Ounces: "<<ounces;
                        cout<<endl<<"........................................"<<endl;
                }
