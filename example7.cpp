#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream f1;
  int count = 0,numchars,numlines;
    ofstream myfile;
    string line;
    char c;
    f1.open ("example.txt");
    f1 << "Writing this to a file.\n";
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

    f1.close();
  return 0;
}