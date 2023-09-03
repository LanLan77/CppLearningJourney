#include <iostream>
using namespace std;

//结构体指针

//定义学生结构体
struct Student{
    string name;
    int age;
    int score;
};

int main(){
    // 1.创建学生结构体变量
    struct Student s = {"王小美",10,99}; 
    // 2.通过指针指向结构体变量
    Student  *p = &s; 
    // 3.通过指针访问结构体变量的数据 
    cout << "学生的姓名： "<<p ->name << endl;
    cout << "学生的年龄： "<<p ->age << endl;
    cout << "学生的分数： "<<p ->score << endl;
}