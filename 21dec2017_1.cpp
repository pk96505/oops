#include <iostream>

using namespace std;

int main(){
	int *add;
	add = new int;
	int val;
	int R, C, count = 0;
	cout<<"  Enter row : ";
	cin>>R;
	cout<<"  Enter col : ";
	cin>>C;
	cout<<"  Enter the element of Matrix : ";
	int i,j,arr[R][C];
	for (i=0; i<R; i++ ){
		for (j=0; j<C; j++ ){
			cin >> arr[i][j];
		}
	}

	add=&arr[0][0];
	for(int k=0; k<(R*C); k++){
		val = *add;
		add++;
		if(val<0)
			count++;
	}
	cout<<"  Total negative no in Matrix is : "<<count<<endl;
}