#include <cstdint>
#include <iostream>
#include <string>
using namespace std;


struct StudentInfo {
    string name;
    int age;
    double score;
}stu2,stu3 = {"小明",19,65.0};

void printInfo(StudentInfo stu){
    cout << "学生姓名： " << stu.name << "\t 年龄： " << stu.age << "\t 成绩： " << stu.score << endl;
}

int main() {
    //创建数据对象并做初始化
    StudentInfo stu = {
        "张三",
        18,
        75.0
    };

    StudentInfo stu4 = stu3;
    //访问数据
    stu.name = "蓝天翔";
    printInfo(stu);

    //结构体对象
    StudentInfo s[3] = {
        {"小红",17,85.5},
        {"小白",19,8213.5},
        {"小黑",47,85321.5}
    };
    printInfo(s[1]);
    cout << "--------------------------------------" << endl;
    
    cin.get();
}


