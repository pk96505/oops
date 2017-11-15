#include <iostream>

using namespace std;

template <typename T>

class R{
	int size;
	T *array;
public:
	R(int s){
		size = s;
		array = new T [size];
	}

	void setarray(){
		T val;
		for(int i=0; i<size; i++){
			cout<<"  Enter array["<<i+1<<"] : ";
			cin>>val;
			array[i]=val;
		}
	}

	void reverse(){
		T temp;
		int i,j;
		for(i=0,j=size; i<=size/2; i++,j--){
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		for(int k=1; k<size+1; k++){
			cout<<array[k];
		}
		cout<<endl;
	}
};

int main(){
	R<char> i(5);
	R<float> f(5);
	i.setarray();
	i.reverse();
	f.setarray();
	f.setarray();
	return 0;
}