#include <__config>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 12;
    int b = 100;

    cout<< "a= " << a << endl;
    cout<< "a的地址为： " << &a << endl;
    cout<< "b的地址为： " << &b << endl;

    int*p = &b; //p是指向b的指针
    p = &a; // p指向了a

    //空指针
    int* ptr = nullptr;
    ptr = NULL;
    ptr = 0;

    int zero = 0;

    //void* 指针

    int i = 10;
    string s = "hello";
    char ch = 'a';

    void* vp = &ch;
    vp = &s;
    
    //指向指针的指针
    i = 1024;
    int* pi = &i;
    int** ppi = &pi;

}