#include <iostream>

using namespace std;

class matrix{
    int r,c;
    int **p;
public:
    matrix (int n1, int n2);
    int elementvalue(int i,int j);
    void getelement(int i,int j,int value);
    void displayelement();
};

matrix::matrix(int n1,int n2){
    r=n1;
    c=n2;
    p=new int *[r];
    for(int i=0 ; i<r ; i++){
        p[i] = new int[c];
    }
}

void matrix::getelement(int i,int j,int value){
    p[i][j]=value;
}

void matrix::displayelement(){
    for(int i=0 ; i<r ; i++ ){
        cout<<endl<<"  ";
        for(int j=0 ; j<c ; j++){
            cout<<p[i][j]<<"\t";
        }
    }
    cout<<endl;
}

int matrix::elementvalue(int i,int j){
    int value;
    value=p[i][j];
    return (value);
}

int main(){
    int n,m,value;
    cout<<"  Enter size of matrix."<<endl<<"  Rows: ";
    cin>>n;
    cout<<"  Columns: ";
    cin>>m;
    matrix m1(n,m),m2(n,m),m3(n,m);
    cout<<"  Please enter the values: "<<endl;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<"  Matrix1["<<i<<"]["<<j<<"] = ";
            cin>>value;
            m1.getelement(i,j,value);
        }
    }
    cout<<"............................."<<endl;
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<"  Matrix2["<<i<<"]["<<j<<"] = ";
            cin>>value;
            m2.getelement(i,j,value);
        }
    }
    cout<<"  Matrix1 : "<<endl;
    m1.displayelement();
    cout<<endl<<"  Matrix2 : "<<endl;
    m2.displayelement();
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            value=m1.elementvalue(i,j);
            m3.getelement(j,i,value);
        }
    cout<<"  Transpose of Matrix1 : "<<endl;
    m3.displayelement();
    
    
    return 0;
}
