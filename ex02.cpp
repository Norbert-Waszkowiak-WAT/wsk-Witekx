#include <iostream>
using namespace std;

int sum_array(int*a,int size){
    int suma=0;
    for(int*p=a;p<a+size;p++){
        suma=suma+*p;
    }
    return suma;
}

int main(){


    
    int tab[5]={2,8,4,2,8};
    int bab[3]={5,10,15};
    cout<<sum_array(tab,5)<<endl;
    cout<<sum_array(bab,3)<<endl;

    return 0;
}