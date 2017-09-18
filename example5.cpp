#include <iostream>

using namespace std;

int main(){
	int count = 0;
	int word = 0;
	int line = 0;
	string c;
	string d;

	cout<<"  Input Text : ";
	while (getline(cin, c)){
    	if (c == "^D")
        break;
    	d += c+'\n';
	}

	/*while(c != '\n'){
		cout.put(c);
		count++;
		cin.get(c);
		if(c == ' '){
			word++;
		}
		if(c == '\n' ){
			line++;
		}
	}*/

	while (getline(d))
        count++;
	cout<<endl<<d;
	cout<<"  \nNumber of characters = "<<count<<", words are "<<word+1<<" and line is "<<line<<endl;
}