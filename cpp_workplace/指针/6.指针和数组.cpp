#include <iostream>
using namespace std;

int main(){
    // 指针和数组
    int arr[] = {1,2,3,4,5};
    
    cout << "arr = "<< arr << endl; // 数组地址就是数组第一个元素存放的地址
    cout << "&arr[0] = "<< &arr[0] << endl;
    cout << "&arr[1] = "<< &arr[1] << endl;

    int *pia =  arr;
    cout << "pia = "<< pia << endl;
    cout << "*pia = "<< *pia << endl;

    cout << "pia+1 = "<< pia+1 << endl; // 指向数组的下一个元素的地址

    *pia = 100;
    //arr[0] = 100

    for(int num: arr){
        cout << num << " "; 
    }
    cout << endl;



    // 用指针直接对数组元素修改
    *pia = 1;
    *(pia+1) = 2;
    *(pia+2) = 3;
    *(pia+3) = 4;
    *(pia+4) = 5;

    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;

    *arr = 1000;
    *(arr+1) = 20;
    *(arr+2) = 30;
    *(arr+3) = 40;
    *(arr+4) = 50;
    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;


}