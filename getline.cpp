
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char name[10][10],c;
    int lines=1; 
    int words=1; 
    int chars=1;
    cout<<"Enter string termanate by ! : ";
    cin.get(c);

    while(c != '!'){
       cin.get(c);
            chars++;
        if(c == ' ' || c == '\n')
            words++;
        if(c == '\n')
            lines++;
    }

    cout<<endl<<setw(17)<<"Particulars"<<setw(20)<<"Details"<<endl;
    cout<<"---------------------------------------"<<endl;

    cout.setf(ios::left,ios::adjustfield);
    cout<<endl<<setw(20)<<"No. of lines  ";
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(15)<<lines;

    cout.setf(ios::left,ios::adjustfield);
    cout<<endl<<setw(20)<<"No. of Words  ";
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(15)<<words;

    cout.setf(ios::left,ios::adjustfield);
    cout<<endl<<setw(20)<<"No. of Characters  ";
    cout.setf(ios::right,ios::adjustfield);
    cout<<setw(15)<<chars<<endl;

    cout<<"---------------------------------------"<<endl;
}