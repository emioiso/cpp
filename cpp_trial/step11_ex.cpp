// 文字列に一致しているか判定する
#include <iostream>
using namespace std;

int main() {
  string greeting;
  cin >> greeting;
//   cout << greeting << endl;

	if(greeting == "Hello"){
		cout << "こんにちは" << endl;
	} else if(greeting == "Morning"){
		cout << "おはよう" << endl;
	} else {
		cout << "はじめまして" << endl;
	}
}
// // 文字列に一致しているか判定する
// #include <iostream>
// using namespace std;

// int main() {
//   string greeting;
//   cin >> greeting;
// //   cout << greeting << endl;

//   if(greeting == "Hello"){
//       cout << "こんにちは" << endl;
//   } else {
//       cout << greeting;
//       cout <<"はHelloではない" << endl;
//   }
// }
