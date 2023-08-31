#include <iostream>
using namespace std;

int main(){
    char str1[5] = {'h','e','l','l','o'};// str1 不是一个字符串
    char str2[6] = {'h','e','l','l','o','\0'};// str2 是一个字符串

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    char str3[] = {"hello"};
    cout << "str3 = " << str3 << endl;

}