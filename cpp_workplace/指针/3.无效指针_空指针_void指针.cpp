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


    // 1. 无效指针(野指针)： 定义一个指针后不进行初始化
    int* p1;
    //p1 = 100; //危险！指针没有初始化，是无效指针


    // 2. 空指针： 空指针不指向任何对象
    int* np = nullptr;  // 空指针字面值
    np = NULL; // 预处理变量
    np = 0; // 0值

    int zero = 0;
    //np = zero  错误，int变量不能赋值给指针

    cout << "np = " << np <<endl; // 输出0地址
    // cout << "*np = " << *np <<endl;  错误 不能访问0地址的内容


    // 3. void* 指针:   全能指针，只能读取地址，不能数据解引用 
    int i = 10;
    string s = "hello";
    char ch = 'a';

    void* vp = &ch;
    vp = &s;

}