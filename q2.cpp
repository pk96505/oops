#include<iostream>

using namespace std;

  class DB;

  class DM{
      int metre;
      int cm;
  public:
    void getdata();
    void display();
  friend DM add ( DM & , DB & );
  };

  class DB{ 
      int feet;
      int inch;
  public :
    void getdata();
  friend DM add ( DM & , DB &);
  };

  DM add (DM &x ,DB &y){ 
    DM p;
            p.cm  = 100*x.metre + x.cm;
            p.cm+= (30*y.feet)+(3*y.inch);
            p.metre = p.cm /100;
            p.cm = p.cm % 100;
      return p;
    }


  int main(){
    DB k;
    DM p;
    k.getdata();
    p.getdata();
    DM total;
    total = add(p,k);
    total.display();
  }

  void DM::getdata(){
                        cout<<endl<<"........................................";
                        cout<<endl<<"     Enter the values in Metre: ";
                        cin>>metre;
                        cout<<endl<<"     Enter the value of Centimetre: ";
                        cin>> cm;
                        cout<<"........................................"<<endl;
                    }

  void DB::getdata (){
                        cout<<endl<<"........................................";
                        cout<<endl<<"     Enter the value in Feet: ";
                        cin>>feet;
                        cout<<endl<<"     Enter the value in Inch: ";
                        cin>>inch;
                        cout<<"........................................";
                      }
  void DM::display(){
                        cout<<endl<<"........................................"<<endl;
                        cout<<"   Total in Metre: "<<metre<<" and Centimetre: "<<cm;
                        cout<<endl<<"........................................"<<endl;
                    }
