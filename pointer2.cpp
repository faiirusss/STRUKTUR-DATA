#include <iostream>
using namespace std;

int main (){    
    int angka1 = 5;
    int angka2 = 15;

    int *ptr;

    ptr = &angka1;

    *ptr = 10;
    
    ptr = &angka2;

    *ptr = 20;

    cout << "Nilai 1 = " << angka1 << " dan nilai 2 =  " << angka2;

    return 0;

}