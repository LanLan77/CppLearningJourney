#include <iostream>
#include <string> // 包含string头文件
using namespace std;

using namespace std;

int main(){
    //默认初始化
    string s1;
    //拷贝初始化
    string s2 = s1;
    string s3 = "hello world";
    //直接初始化
    string s4("hello world");
    string s5(8,'h');
    //访问字符
    cout << "s4[2]: " << s4[2] << endl; 
    //访问字符串大小
    int s4size = s4.size();
    cout << "s4的大小为: " << s4size << endl; 
    s4[s4.size()-1] = '\?';
    //遍历
    for (int i = 0; i< s4.size(); i++) {
        s4[i] = toupper(s4[i]);
    }
    cout << s4 << endl;
    //字符串拼接
    string str1 = "hello" , str2("world");
    string str3 = str1 + str2;
    cout << str3 << endl;
    string str4 = str1 + " "+ str2;
    cout << str4 << endl;
    // string str5 = "hello" + "word"; 错误的
}