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

int main(int argc, char * agrv[]){
	if(4!=argc){
		cout<<"  Error while opening the file"<<endl;
	}

	fstream float_file("Aq26_float.txt",ios::in);
	fstream string_file("Aq26_string.txt",ios::in);
	fstream merge_file("Aq26_merge.txt",ios::out|ios::in|ios::trunc);
	if(!float_file.is_open()||!string_file.is_open()){
		cout<<"Error while opening the file";
	}
	else{
		
		float_file.seekg(0);
		string_file.seekg(0);
		string ch;
		string st;
		while(float_file.good()&&string_file.good()){
			getline(float_file,ch);
			getline(string_file,st);
			merge_file<<ch<<form<<st<<endl;
		}
	}
	float_file.close();
	string_file.close();
	merge_file.close();
}