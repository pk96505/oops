#include <iostream>
#include <cstdlib>

using namespace std;

class matrix{
    int r,c;
    int **p;
public:
    matrix (int n1, int n2);
    matrix operator + (matrix &);
    matrix operator - (matrix &);
    matrix operator * (matrix &);
    matrix operator ^ (matrix &);
    friend ostream & operator <<(ostream & , const matrix &);
    friend istream & operator >>(istream & , matrix &);
    int elementvalue(int i,int j);
    void getelement(int i,int j,int value);
};

matrix matrix :: operator + ( matrix & M){
    matrix temp(r,c);
    int value;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            value=elementvalue(i,j)+M.elementvalue(i,j);
            temp.getelement(i,j,value);
        }    
    }        
    return temp;
}

matrix matrix :: operator - ( matrix & M){
    matrix temp(r,c);
    int value;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            value=elementvalue(i,j)-M.elementvalue(i,j);
            temp.getelement(i,j,value);
        }    
    }        
    return temp;
}

matrix matrix :: operator * (matrix & M){
    matrix temp(r,c);
    int i,j,k,value;
    for(i=0;i<M.r;i++){
        for(j=0;j<M.c;j++){
            value=0;
            for(k=0;k<M.c;k++){ 
                value=value+elementvalue(i,j)*M.elementvalue(k,j);
                temp.getelement(i,j,value);
            }
        }
    }
    return temp;
}

matrix matrix :: operator ^ ( matrix & M){
    matrix temp(r,c);
    int value;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            value=M.elementvalue(i,j);
            temp.getelement(j,i,value);
        }    
    }        
    return temp;
}

istream & operator >> (istream & in, matrix & M ){
    int value;
    cout<<"  Enter element of Matrix : "<<endl;
    for(int i=0; i<M.r; i++){
        for(int j=0; j<M.c; j++){
            in>>value;
            M.getelement(i,j,value);
        }
    }
    return in;
}

ostream & operator << (ostream & out, const matrix & M ){
    cout<<"  Matrix : "<<endl;
    for(int i=0 ; i<M.r ; i++ ){
        cout<<endl<<"  ";
        for(int j=0 ; j<M.c ; j++){
            out<<M.p[i][j]<<"\t";
        }
    }
    cout<<endl<<endl;
    return out;
}

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

int matrix::elementvalue(int i,int j){
    int value;
    value=p[i][j];
    return (value);
}

int main(){
    int n,m,value,ch;
    cout<<"  Enter size of matrix."<<endl<<"  Rows: ";
    cin>>n;
    cout<<"  Columns: ";
    cin>>m;
    matrix m1(n,m),m2(n,m),m3(n,m);
    do{
        cout<<"*****************************************************"<<endl;
        cout<<"  1.Addtion of two Matrix."<<endl;
        cout<<"  2.Subtraction of two Matrix."<<endl;
        cout<<"  3.Multiplication of two Matrix."<<endl;
        cout<<"  4.Transpose of Matrix."<<endl;
        cout<<"  5.Exit."<<endl<<endl;
        cout<<"   Enter your choise : ";
        cin>>ch;
        switch (ch){
            case 1 :
            cin >> m1;
            cin >> m2;
            m3 = m1 + m2;
            cout<< "************Addtion of two matrix*************"<<endl;
            cout << m3;
            break;

            case 2 :
            cin >> m1;
            cin >> m2;
            m3 = m1 - m2;
            cout<< "************Subtraction of two matrix*************"<<endl;
            cout << m3;
            break;

            case 3 :
            cin >> m1;
            cin >> m2;
            m3 = m1 * m2;
            cout<< "************Multiplication of two matrix*************"<<endl;
            cout << m3;
            break;

            case 4 :
            cin >> m1;
            m3 = m3^m1;
            cout<< "************Transpose of matrix*************"<<endl;
            cout << m3;
            break;
            
            case 5 :
            exit(0);
        }
    }while(true);
}
