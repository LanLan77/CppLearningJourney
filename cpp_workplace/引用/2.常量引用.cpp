#include<iostream>
using namespace std;

int main(){
    int i = 42;  
    const int &r1 = i;       //正确：允许将const int & 绑定到一个普通int对象上  
    const int &r2 = 42;      //正确  
    const int &r3 = r1 * 2;  //正确  
    // int &r4 = r1 * 2;     //错误  
  
    double dval = 3.14;  
    const int &ri = dval;    //正确  
    //等价于  
    const int temp = dval;  
    // const int &ri = temp;  
  
    int a = 42;  
    int &r1a = i;  
    const int &r2a = i;  
    r1a = 0;                  //正确  
    // r2a = 0;               //错误  
}