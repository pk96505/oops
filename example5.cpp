#include <iostream>

using namespace std;

int main(){
	int count = 1;
	int word = 1;
	int line = 1;
	char c;

	cout<<"  Input Text to terminate please enter ! : ";
	cin.get(c);

	while(c != '!'){
		cout.put(c);
		count++;
		if(c == '\n' ){
			line++;
		}
		if(c == ' '){
			word++;
		}
		cin.get(c);
		
	}
	
	cout<<"  \nNumber of characters = "<<count<<", words are "<<word+1<<" and line is "<<line<<endl;
}