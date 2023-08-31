#include<iostream>
using namespace std;

int main(){
    int ia[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int ia2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //访问
    cout << "ia[1][2] = " << ia[1][2] << endl;
    

    //遍历
    //计算二维数组中的行数和列数
    cout << "ia二维数组的总大小为： "<< sizeof(ia)<< endl;
    cout << "ia二维数组每一行的大小为： "<< sizeof(ia[0])<< endl;
    cout << "ia二维数组每一个元素的大小为： "<< sizeof(ia[0][0])<< endl;

    int rowCount = sizeof(ia)/sizeof(ia[0]);
    int colCount = sizeof(ia[0])/sizeof(ia[0][0]);

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
        cout << ia[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}