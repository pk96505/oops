#include<iostream>
#include<cstdlib>
        using namespace std;
const int MAX =10;
template<typename T>

class Array{
        T *a;
        int num;
public:
        Array(){
                cout<<"\nNumber of elements in array: ";
                cin>>num;
                a = new T[num];
                cout<<"\tEnter elements: ";
                for(int i=0;i<num;i++){
                cin>>a[i];
                }
        }

        void sortArray(){
                T temp;
                for (int i=1; i<= num-1; i++){
                for (int k=0; k<= num-i; k++){
                        if (a[k-1]>=a[k])
                        {
                        temp = a[k-1];
                        a[k-1]=a[k];
                        a[k]=temp;
                        }
                }
        }
        disp();
        }

        void disp(){
                cout<<"\tSorted Array elements: \n";
                for(int i=0 ; i<num ; i++){
                        cout<<"\t"<<a[i];
                }
        }

        void addElem(){
                int elem;
                cout<<"How many elements you want to Add? ";
                cin>>elem;
                if(elem > (MAX-num)){
                        cout<<"Max limit is 10 elements. \n";
                        exit(0);
                }
                        else{
                cout<<"\nEnter elements : ";
                for(int i= num; i<num+elem; i++){
                        cin>>a[i];
                }
        }
                num = num + elem;
                sortArray();
        }

        void deleteElem(){
                T del;
                cout<<"\nEnter element to be deleted: ";
                cin>>del;
                for(int i=0; i<num; i++){
                        if(del == a[i]){
                                for( ; i<num-1 ; i++){
                                a[i] = a[i+1];
                                }
                        a[num-1] = 0;
                        num = num - 1;
                        }
                }
                sortArray();
        cout<<"Element "<<del<<" deleted from array..\n";
        }

};
int main(){

        int choice,c;
        cout<<"\nCreating int object...";
        Array<int> iObj;
        iObj.sortArray();

        cout<<"\nCreating float object...";
        Array<float> fObj;
        fObj.sortArray();


        cout<<"\nCreating char object...";
        Array<char> cObj;
        cObj.sortArray();

        cout<<"\nOperations: 1. Add element\n 2. Delete element\n 3. Display ELements\n 4. Exit\n";
        while(1){
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch(choice){
                case 1: cout<<"For Int(1), Float(2) or Char(3) array? ";
                        cin>>c;
                        if(c == 1)
                                iObj.addElem();
                        if(c == 2)
                                fObj.addElem();
                        if(c == 3)
                                cObj.addElem();
                        break;
                case 2: cout<<"From Int(1), FLoat(2) or  Char(3) array? ";
                        cin>>c;
                        if(c == 1)
                                iObj.deleteElem();
                        if(c == 2)
                                fObj.deleteElem();
                        if(c == 3)
                                cObj.deleteElem();
                        break;
                case 3: cout<<"For Int(1), FLoat(2) or Char(3) array? ";
                        cin>>c;
                        if(c == 1)
                                iObj.disp();
                        if(c == 2)
                                fObj.disp();
                        if(c == 3)
                                cObj.disp();
                        break;
                case 4: exit(0);
                }
        }

}
