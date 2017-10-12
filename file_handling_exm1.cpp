#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]){
	if(argc != 3){
		cerr << "  Usage: " << argv[0] << "name.txt match.txt" << endl;
		return 1; 
	}
	
	ifstream name_file(argv[1]);
	ifstream match_file(argv[2]);
}