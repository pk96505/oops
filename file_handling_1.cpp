#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream file("file_handling_1.txt",ios::out|ios::in);
	if(!file.is_open()){
		cout<<"Error while opening the file."<<endl;
	}
	else{
		file<<"Pankaj Kumar"<<endl;
		file<<"IIC UDSC"<<endl;
		file<<"Final Year"<<endl;
		cout<<"Successfully written to the file."<<endl;
	}
	file.seekg(0,ios::beg);
	string line;
	while(file.good()){
	getline(file,line);
	cout<<line<<endl;
	cout<<file.tellg()<<endl;
	}
	file.close();
}