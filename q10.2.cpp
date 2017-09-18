#include <iostream>
#include <cstring>

using namespace std;

class Item{
    char * name;
    int code;
    double cost;
public:
    
    Item(char *c, int cod, double cos){
        int len = strlen(c);
        name = new char[len+1];
        strcpy(name,c);
        code = cod;
        cost = cos;
    }
    
    void get_data(){
        cout.fill('-');
        cout.precision(2);
        cout.setf(ios::left,ios::adjustfield);
        cout.width(20);
        cout<<endl<<name;
        cout<<code;
        cout.setf(ios::right,ios::adjustfield);
        cout.width(17);
        cout<<cost;
    }
};

int main(){
    Item I1("Turbo C++",1001,250.95);
    Item I2("C Primer",905,95.70);
    Item I3("Java",989,92.68);
    
    cout.setf(ios::left,ios::adjustfield);
    cout.width(20);
    cout<<"NAME";
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout<<"CODE";
    cout.setf(ios::right,ios::adjustfield);
    cout.width(10);
    cout<<"COST";
    
    I1.get_data();
    I2.get_data();
    I3.get_data();
    cout<<endl;
}
