#include <iostream>
using namespace std;
void welcome();

void welcome() {
  cout << "Welcome to the program!" << endl;
}
int main() {
  cout << "Hello world" << endl;
  welcome();
  // 等待用户输入
  cin.get();
  cin.get();
  return 0;
}

