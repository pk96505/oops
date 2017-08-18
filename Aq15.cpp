#include <iostream>

using namespace std;

class Matrix{
    int m[3][3];
public:
    void read(){
        cout<<"  Enter the elemets of 3x3 matrix: \n";
        for(int i = 0 ; i < 3 ; i++ ){
            for(int j = 0 ; j < 3 ; j++ ){
                cout<<"  m["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }

    void display(void){
        int i,j;
        for(i=0;i<3;i++){
                cout<<endl<<"  ";
            for(j=0;j<3;j++){
                cout<<m[i][j]<<"\t";
                        }
                }
                cout<<endl;
        }

    Matrix operator * (Matrix m1){
        Matrix temp;
        int i,j,k;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                temp.m[i][j]=0;
                for(k=0;k<3;k++){                                           
                temp.m[i][j]=temp.m[i][j]+m[i][k]*m1.m[k][j];
            }
        }
    }
    return temp;
    }
};



int main(){
    Matrix M1,M2,M3;
    M1.read();
    cout<<endl<<"  The matrix is as follows :"<<endl;
    M1.display();
    M2.read();
    cout<<endl<<"  The matrix is as follows :"<<endl;
    M2.display();
    M3 = M1 * M2;
    cout<<endl<<"  Multipliction of two matrix :";
    M3.display();
    return 0;
}