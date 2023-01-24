#include <iostream>
using namespace std;

int main() {
  string name;
  cin >> name;
  cout << "Hello " << name << endl;

  if(name == "C++"){
      cout << "Welcome" << endl;
  }
}
// ===== 理解したこと =====
// C++は文字列を比較する関数を使わなくても文字列を
// 比較したい文字列を変数に代入すれば比較ができる！
