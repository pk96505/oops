#include <iostream>

using namespace std;

class Matrix{
	//int m,n;
	// mat[3][3];
public:
	int mat[3][3];
	Matrix operator + (const Matrix &);
	Matrix operator - (const Matrix &);
	Matrix operator * (const Matrix &);
	Matrix operator ^ (const Matrix &);
	friend ostream & operator <<(ostream & , const Matrix &);
	friend istream & operator >>(istream & , Matrix &);
};

istream & operator >> (istream & in, Matrix & M ){
	/*cout<<"  Enter size of row : ";
	in>>M.m;
	cout<<"  Enter size of column : ";
	in>>M.n;*/
	cout<<"  Enter element of Matrix : "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			in>>M.mat[i][j];
		}
	}
	return in;
}

/*Matrix Matrix :: operator + (const Matrix & M){
}*/

ostream & operator << (ostream & out, Matrix & M ){
	cout<<"  Matrix : "<<endl;
	for(int i=0; i<3; i++){
		cout<<"\t  ";
		for(int j=0; j<3; j++){
			out<<M.mat[i][j]<<" ";
		}
		out<<endl;
	}
	return out;
}

int main(){
	Matrix m;
	cin>>m;
	cout<<m;
}