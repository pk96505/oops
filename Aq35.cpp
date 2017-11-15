#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
        using namespace std;
int main(){
        vector<int>V;
        list<int>L;

        int x,y,enm,onm;
        cout<<"enter the no. of elements in even vector\n";
        cin>>enm;
        cout<<"\nEnter the values\n ";
        for(int i =0; i < enm; i++){
                cin>>x;
                V.push_back(x);
        }

        cout<<"\nenter the no. of elements in odd vector?\n";
        cin>>onm;
        cout<<"\nEnter the values\n ";
        for(int i = 0; i < onm; i++){
                cin>>y;
                L.push_back(y);
        }

        list<int>LV(V.begin(),V.end());
        LV.merge(L);

        vector<int>vect;
        vector<int>:: iterator it;

        copy(LV.begin(), LV.end(), back_inserter(vect));

        cout<<"\nMerged Vector-\n ";
        for(it = vect.begin(); it != vect.end(); it++){
                cout<<*it<<"   ";
        }
        cout<<"\n";
}
