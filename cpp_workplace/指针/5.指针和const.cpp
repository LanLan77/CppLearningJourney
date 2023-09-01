#include <iostream>
using namespace std;

int main() {
    // 1. 指向常量的指针
    const int c1 = 10, c2 = 25;
    const int* pc = &c1; // pc是指向常量的指针
    cout << "*pc = " << *pc << endl;

    pc = &c2; //pc是指向常量的变量
    cout << "*pc = " << *pc << endl;

    // 2. 指针常量
    int i = 1;
    int * const cp = &i;
    //cp =  &a; 
    *cp = 12;
    cout << "i = " << i  << endl;



}