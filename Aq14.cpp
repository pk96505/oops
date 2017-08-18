#include <iostream>

using namespace std;

class Rational{
    int x,y;
public:
    Rational(){
        x=0;
        y=0;
    }
    Rational(int a,int b){
        x = a;
        y = b;
    }
    
    Rational operator +(Rational p){
        Rational temp;
        temp.x = (x*p.y) + (p.x*y);
        temp.y = y*p.y;
        int n,d,r,rn,rd,div=1;
        n = temp.x;
        d = temp.y;
        if( n < d ){
            r = d;
        }
        else
        {
            r = n;
        }
        do{
            rn = temp.x % div;
            rd = temp.y % div;
            if( rn == 0 && rd == 0 ){
                temp.x = temp.x/div;
                temp.y = temp.y/div;
            }
            div++;
        }while(div <= r);
        
        return temp;
    }
    void display(Rational ,int);
};

void Rational :: display(Rational t,int num){
    int n,d,r,rn,rd,div=1;
    n = t.x;
    d = t.y;
    if( n < d ){
        r = d;
    }
    else
    {
        r = n;
    }
    do{
        rn = t.x % div;
        rd = t.y % div;
        if( rn == 0 && rd == 0 ){
            t.x = t.x/div;
            t.y = t.y/div;
        }
        div++;
    }while(div <= r);
    
    if(t.x == t.y || t.y == 1){
        cout<<"   Number "<<num<<" : "<<t.x<<endl;
    }
    else
    {
        cout<<"   Number "<<num<<" : "<<t.x<<"/"<<t.y<<endl;
    }
}

int main(){
    int n1,n2,d1,d2;
    cout<<"   Enter the numerator of number 1 : ";
    cin>>n1;
    cout<<"   Enter the denominator of number 1 :";
    cin>>d1;
    Rational R1(n1,d1);
    R1.display(R1,1);
    cout<<"   Enter the numerator of number 2 : ";
    cin>>n2;
    cout<<"   Enter the denominator of number 2 :";
    cin>>d2;
    Rational R2(n2,d2);
    R2.display(R2,2);
    Rational R3;
    R3 = R1+ R2;
    cout<<"   Final result";
    R3.display(R3,3);
    return 0;
}
