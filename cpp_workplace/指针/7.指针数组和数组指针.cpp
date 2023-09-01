#include <iostream>
using namespace std;

/* 
    1. 指针数组: 一个数组，里面有5个元素都是相同类型的指针

    2. 数组指针: 一个指针，指向数组的指针 


 */
int main(){

    int arr[] ={1,2,3,4,5};
    int* pa[5];    //指针         // 指针数组，里面有5个元素，每个元素都是一个int指针
    int(* ap)[5];  //数组         // 数组指针，指向一个int数组，数组包含5个元素

    cout << "pa 在内存中的长度为： " << sizeof(pa) << endl; 
    cout << "ap 在内存中的长度为： " << sizeof(ap) << endl;  // 64x 系统中指针占8个字节 


    int i = 10; 
    pa[0] = &i;     //pa是指针
    pa[1] = arr;    //pa指针数组的第一个元素，pa[1]作为一个指针指向了arr属于第一个元素的地址
    pa[2] = arr+2; 

    
    ap = &arr;      //ap指向的是整个arr数组 
    cout << "*ap = " << *ap << endl;
    cout << "**ap = " << **ap << endl;
    cout << "**ap+1 = " << **ap+1  << endl;

}