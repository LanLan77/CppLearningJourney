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

}

//指针是指向另一种数据类型的符合类型