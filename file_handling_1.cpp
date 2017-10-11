#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char name[30];
	fstream file("file_handling_1.txt",ios::out|ios::in);
	if(!file.is_open()){
		cout<<"Error while opening the file."<<endl;
	}
	else{
		cin.getline(name,29);
		file<<"Namae is : "<<name<<endl;
		file<<"IIC UDSC"<<endl;
		file<<"Final Year"<<endl;
		cout<<"Successfully written to the file."<<endl;
	}
	file.seekg(0,ios::beg);
	string line;
	while(file.good()){
	getline(file,line);
	cout<<line<<endl;
	}
	file.close();
}