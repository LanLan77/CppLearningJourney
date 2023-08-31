#include <iostream>
using namespace std;

enum Week{
    Mon, Tue, Wed, Thu = 10, Fri, Sat ,Sun
};

int main(){
    Week w1 = Mon;
    Week w2 = Tue;
    //Week w3 = 3 错误的
    Week w3 = Week(3);
    Week w4 = Tue;

    cout << "w1 = " << w1 << endl;
    cout << "w2 = " << w2 << endl;
    cout << "w3 = " << w3 << endl;
    cout << "w4 = " << w4 << endl;
}