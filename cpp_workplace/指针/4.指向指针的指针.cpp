#include <iostream>
using namespace std;

int main(){
    // 指向指针的指针
    int i = 1024;
    int* pi = &i;
    int** ppi = &pi;

    cout << "i = " << i << endl;
    cout << "pi = " << pi << endl;
    cout << "ppi = " << ppi << endl;
    cout << "*pi = " << *pi << endl;
    cout << "*ppi = " << *ppi << endl;
     cout << "**ppi = " << **ppi << endl;
}