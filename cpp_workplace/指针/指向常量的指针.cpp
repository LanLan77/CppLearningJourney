#include <iostream>
using namespace std;

int main() {
    //1.指向常量的指针
    const int c1 = 10, c2 = 25;
    const int* pc = &c1;
    cout << "*pc = " << *pc << endl;

    pc = &c2;
    cout << "*pc = " << *pc << endl;

}