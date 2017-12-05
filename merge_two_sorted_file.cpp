#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

ostream & form (ostream & out){
    out<<setw(10);
    out.setf(ios::right,ios::adjustfield);
    out<<setprecision(2);
    out<<setfill('*');
    out.setf(ios::showpos);
    return out;
}

int main(/*int argc, char * agrv[]*/){
    /*if(4!=argc){
        cout<<"  Error while opening the file"<<endl;
    }*/
    
    fstream file1("file1.txt",ios::in);
    fstream file2("file.txt",ios::in);
    fstream merge_file("Output_merge.txt",ios::out|ios::in|ios::trunc);
    if(!file1.is_open()||!file2.is_open()){
        cout<<"Error while opening the file";
    }
    else{
        
        file1.seekg(0);
        file2.seekg(0);
        string ch;
        string st;
        int temp;
        while(file1.good()&&file2.good()){
            getline(file1,ch);
            getline(file2,st);
            //if(st>ch)
             //   merge_file<<ch<<form<<st<<endl;
            //else
                merge_file<<st<<ch<<endl;
        }
    }
    file1.close();
    file2.close();
    merge_file.close();
}

