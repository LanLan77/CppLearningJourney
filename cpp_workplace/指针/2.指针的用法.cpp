#include <iostream>

using namespace std;

int main ()
{
    string food = "Pizza";
    string* ptr = &food;

    // 输出食物的价值（Pizza）
    cout << food << "\n";

    // 输出食物的内存地址（0x6dfed4）
    cout << &food << "\n";

    // 访问食物的内存地址并输出其值（Pizza）
    cout << *ptr << "\n";

    // 改变指针的值
    *ptr = "Hamburger";

    // 输出指针的新值（Hamburger）
    cout << *ptr << "\n";

    // 输出食物变量（Hamburger）的新值
    cout << food << "\n";


    cout << "-------------------" << "\n";
    // 不带星访问的是内存地址
    cout << ptr << "\n";
    // 带星访问的是值
    cout << *ptr << "\n";
}