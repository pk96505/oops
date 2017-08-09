#include <iostream>
 
 using namespace std;

int main()
{
    cout << "Enter a positive integer: ";
    int length,value,i;
    cin >> length;
    int *array1 = new int[length];
    int *array2 = new int[length];  
    cout << "I just allocated an array of integers of length " << length <<endl<<endl;
    for(i=0;i<length;i++){
    cout<<"  array1["<<i<<"]=";
    cin>>value;
    array1[i]=value;
    array2[i]=array1[i];
    } 
    cout<<endl<<"..................."<<endl<<endl;
    for(int j=0;j<length;j++){
    cout<<"  array2["<<i<<"]="<<array2[j]<<endl;
    } 
    cout<<endl;
 	delete[] array1;
 	delete[] array2; 
    array1 = 0; 
    array2 = 0;
 
    return 0;
}
