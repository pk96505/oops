#include <iostream>

using namespace std;

class matrix{

 	int m[3][3];
 public:
	void read(void){
		cout<<"Enter the elements of 3*3 matrix:\n";
		int i,j;
		for(i=0;i<3;i++)
			for(j=0;j<3;j++){
				cout<<"m["<<i<<"]["<<j<<"] = ";
				cin>>m[i][j];
					}
			}
	void display(void){
		int i,j;
		for(i=0;i<3;i++){
				cout<<endl;
			for(j=0;j<3;j++){
				cout<<m[i][j]<<"\t";
						}
				}
		}
	friend matrix trans(matrix);
	friend matrix mul(matrix, matrix);
};

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
	mat1.read();
	cout<<endl<<"The matrix is as follows:";
	mat1.display();
	mat3.read();
	cout<<endl<<"The matrix is as follows:";
	mat3.display();
	mat2=trans(mat1);
	cout<<endl<<"Transposed matrix:";
	mat2.display();
	mat4=mul(mat1,mat3);
	cout<<endl<<"Multiplication on matrixs:";
	mat4.display();
	return 0;
}

