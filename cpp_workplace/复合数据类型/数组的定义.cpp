#include <iostream>
using namespace std;

int main(){
    int a1[10];
    const int n = 4;
    double a2[n];

    //初始化
    int a3[4] = {1,2,3,4};
    float a4[] = {2.5,33.4,51.0};

    //访问
    cout << "----------------------------" << endl;
    int a[] = {1,2,3,4,5,6,7,8};
    cout << a[2] << endl;
    cout << "----------------------------" << endl;

    // 获取数组长度
    cout << "a数组所占空间大小为："<<sizeof(a) << endl;
    cout << "a数组每个元素所占空间大小为："<<sizeof(int) << endl;
    cout << "a数组每个元素所占空间大小为："<<sizeof(a[0]) << endl;

    int aSize = sizeof(a)/sizeof(a[0]);
    cout << "数组a长度为："<< aSize <<endl;

    cout << "----------------------------" << endl;
    //遍历
    for (int i = 0; i <aSize; i++) {
    cout << "a["<< i<< "]= " << a[i]<< endl;
    }
    cout << "----------------------------" << endl;
    
    return 0;
}