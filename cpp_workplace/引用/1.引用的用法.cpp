#include <iostream>
using namespace std;

/* 
    1. 什么是引用： 我们可以给c++对象起另外一个名字，这就叫引用
    2. 引用的用法： 在做声明时，我们可以在变量前加上"&",表示他是另一个变量的引用。引用必须被初始化 
    3. 注意事项
        * 引用并非对象
        * 引用必须初始化
        * 引用只能绑定在对象上，而不能与字面值或某个表达式的计算结果绑定在一起
        * 类型要严格匹配

    鲁迅就是周树人
 */
int main(){
    int a = 10, b = 25;

    //引用：鲁迅就是周树人
    int&ref = a;    // 绑定不能变
    
    cout << "ref = " << ref <<endl;
    cout << "a的地址为" << &a <<endl;
    cout << "ref的地址为 = " << &ref <<endl;


    //引用的引用
    int &rref = ref;    // a = ref = rref

    cout << "a = " << a <<endl;
    cout << "ref = " << ref <<endl;
    cout << "rref = " << rref <<endl;
    

    cin.get();
}