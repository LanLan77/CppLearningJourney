#include <iostream>
#include <vector>
#include <pthread.h>
// vector是标准库的一部分
//数组的长度不能调整，而且很难获取数组长度 
using namespace std;

int main(){
    //默认初始化

    vector<int> v1;
     //列表初始化：拷贝初始化 2
    vector<char> v3;
    v3.push_back('a');
    v3.push_back('b');
    v3.push_back('c');

    for (char c : v3) {
        cout << c << " ";
    }
    cout << endl;
    
    //直接初始化
    vector<short> v4(5); //5个元素默认值为0
    vector<long> v5(5,100); //直接初始化5个元素，值为100

    //访问元素
    cout << v5[3] << endl;
    v5[3] = 25;
    cout << v5[3] << endl;

    //遍历所有元素
    for (int i = 0; i<v5.size(); i++) {
        cout << v5[i] << " ";
    }

    cout  << endl;

    for(int num:v5){
        cout << num << " ";
    }
    cout  << endl;

    //向容器中添加倒序的元素
    for (int i = 10; i>0; i--) {
        v1.push_back(i);
    }
    for (int num: v1){
        cout << num << " ";
    }

    cin.get();
}