#include <iostream>
using namespace std;

int main() {
    //指针的定义语法形式为：
    //类型 * 指针变量

    int* p1;
    long* p2;
    long long* p3;

    cout<< "p1在数据类型的长度为： "<< sizeof(p1) << endl;
    cout<< "p2在数据类型的长度为： "<< sizeof(p2) << endl;
    cout<< "p3在数据类型的长度为： "<< sizeof(p3) << endl;


    // 指针的使用
    int a = 10;
    int b = 20;
    long c = 35;

    p1 = &a;
    //p2 = &b;      这是不对的，因为p2 是long* 类型，b是int类型，不匹配
    p2 = &c; 

    cout << "a的地址为" << &a <<endl;
    cout << "b的地址为" << &b <<endl;
    cout << "c的地址为" << &c <<endl;

    cout << "p1为" << p1 <<endl;
    cout << "p2为" << p2 <<endl;
    cout << "p3为" << p2 <<endl;


}

//指针是指向另一种数据类型的符合类型