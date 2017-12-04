#include <iostream>
#include <list>
#include <string>

using namespace std;

class Emp{
        int ID;
        string Name;
        double Sal;
public:
        Emp(int i, string s, double d){
                ID = i;
                Name = s;
                Sal = d;
        }
        void disp(){
                cout<<"Employee details-\n";
                cout<<"Emp ID: "<<ID<<"\n Name: "<<Name<<"\nSalary: "<<Sal<<endl;
        }
};
int main(){
        list<Emp> emp_list;
        list<Emp> :: iterator ei;
        Emp e1(1001,"jack",230000);
        Emp e2(1002,"daniel",60000);
        emp_list.push_back(e1);
        emp_list.push_back(e2);

        for(ei = emp_list.begin(); ei != emp_list.end(); ei++){
                (*ei).disp();
        }
}
