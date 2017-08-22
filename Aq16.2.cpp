#include <iostream>

using namespace std;

class matrix{

 	int m[3][3];
 public:
 	friend ostream & operator << (ostream &out, matrix &M);
 	friend istream & operator >> (istream &in, matrix &M);
	friend matrix trans(matrix);
	friend matrix mul(matrix, matrix);
};

ostream & operator << (ostream &out, matrix &M){
	int i,j;
	for(i=0;i<3;i++){
		cout<<endl;
		for(j=0;j<3;j++){
			out<<M.m[i][j]<<"\t";
					}
			}
}

istream & operator >> (istream &in, matrix &M){
	cout<<"Enter the elements of 3*3 matrix:\n";
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			cout<<"m["<<i<<"]["<<j<<"] = ";
			in>>M.m[i][j];
			}
}

matrix trans(matrix m1){
	matrix m2;
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
 			m2.m[i][j]=m1.m[j][i];
		}
	return(m2);
}

matrix mul(matrix m1,matrix m2){
	matrix m3;
	int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m3.m[i][j]=0;
			for(k=0;k<3;k++){                             	 			
				m3.m[i][j]=m3.m[i][j]+m1.m[i][k]*m2.m[k][j];
            }
        }
    }
	return(m3);
}

int main(){
	matrix mat1,mat2,mat3,mat4;
	cin>>mat1;
	cout<<endl<<"The matrix is as follows:";
	cout<<mat1;
	cin>>mat3;
	cout<<endl<<"The matrix is as follows:";
	cout>>mat3;
	mat2=trans(mat1);
	cout<<endl<<"Transposed matrix:";
	cout>>mat2;
	mat4=mul(mat1,mat3);
	cout<<endl<<"Multiplication on matrixs:";
	cout>>mat4;
	return 0;
}

