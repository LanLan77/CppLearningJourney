#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

//作用: 就是从string对象读取字符或字符串。
void string_stream_test1(){
    string s = "A1A2A3A4";
    stringstream ss(s);
    char ch;
    while(ss>>ch){
  
        cout << ch << " ";
    }

    //运行结果
    //A 1 A 2 A 3 A 4
}

void string_stream_test2(){
    string s = "hello world";
    stringstream ss(s);
    string str;
    while(ss>>str){
  
        cout << str << "/";
    }

    //运行结果
    //  hello/world
}



int main(){
    //string_stream_test1();
    //string_stream_test2();
}

