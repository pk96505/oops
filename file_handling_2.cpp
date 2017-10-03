#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	char input[200];
	strcpy(input,"Panakj Kumar IIC");
	fstream file("String.bin",ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.is_open()){
		cout<<"Error while opening the file";
	}
	else{
		int length = strlen(input);
		for(int count=0; count<=length; count++){
			file.put(input[count]);
		}	
		file.seekg(0);
		char ch;
		//cout<<endl<<file.tellg();
		while(file.good()){
			file.get(ch);
			cout<<ch;
		}
	}
	cout<<endl;
	file.close();
}