#include <iostream>
#include <fstream>
using namespace std;

int main () {
	int count = 0,numchars=0,numlines=0;
  	ofstream myfile;
  	ifstream f1;
  	char c;
  	myfile.open ("example.txt");
  	myfile << "pankaj\n";
  	//myfile << "kumar\n";
  	f1.open ("example.txt");
  	f1.get(c);
  	/*while (getline(myfile, line))
        count++;
    cout<<count;*/
  	
  	while (f1) {
     while (f1 && c != '\n') {
       numchars = numchars + 1;
       f1.get(c);
     }
     numlines = numlines + 1;
     f1.get(c);
   	}
	cout<<numchars<<endl<<numlines;
	myfile.close();
	f1.close();
  	return 0;
}