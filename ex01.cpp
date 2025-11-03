#include<iostream>
using namespace std;

int main() {
    int x=11;
    int*p = &x;
    cout << p << endl;
    cout << *p << endl;
    x=*p=6;
    cout << x << endl;
    return 0;
}