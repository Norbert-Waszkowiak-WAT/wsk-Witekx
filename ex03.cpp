#include <iostream>

void min_max(int* arr, int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i =0; i< size; i++) {
        if (arr[i] < *min ) *min =arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
using namespace std;
int main() {
    int tab[5] = {0,1,2,3,4,};
    int tab1[5] = {5,6,7,8,9};
    int a;
    int b;
    min_max(tab1, 5, &a, &b);
    cout << "min" << " " << a << endl << "max" << " " << b << endl;
    return 0;
}