#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Jaki rozmiar tablicy? "<<endl;
    cin>>n;

    int *arr=new int[n];

    for(int i=0;i<n;i++){
        arr[i]=i+2;
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    delete[]arr;

    return 0;

}