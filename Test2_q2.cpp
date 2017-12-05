#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	// string ch;
	// char sc;
	// string f1,f2;
	// ifstream file1("input.txt",ios::app);
	// if(!file1.is_open()){
	// 	cout<<"  Error while opening file";
	// }
	
	// file1.seekg(0);
	// while(file1.good()){
	// 	file1.get(sc);
	// 	cout<<sc;
	// }

	ifstream f1("input.txt");
	ofstream f2("out1.txt"), f3("out2.txt");
	int i,j;
	string str;
	char temp;
	int len=0;
	while(f1)
	{
		f1>>str;
		if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'||str[0]=='A'||str[0]=='E'||str[0]=='I'||str[0]=='O'||str[0]=='U')
		{
			f2<<str;
			f2<<endl;
		}
		else
		{
			for(i=0,j=str.length()-1; i<(str.length()-1)/2; ++i,--j){
				temp = str[i];
				str[i]=str[j];
				str[j]=temp;
			}
			f3<<str;
			f3<<endl;
		}
	}
}