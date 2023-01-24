// ゼロ・プラス・マイナス
#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
//   cout << number << endl;

	if(number == 0){
		cout << number << "は0" <<endl;
	} else if(number > 0){
		cout << number << "はプラス" <<endl;
	} else {
		cout << number << "はマイナス" <<endl;
	}
}

// // 特定の条件で数値を表示
// #include <iostream>
// using namespace std;

// int main() {
//   int number;
//   cin >> number;
// //   cout <<  number << endl;

//   if(number < 100){
//     cout <<  number << "は100より小さい" << endl;
//   } else if(number < 200){
//     cout <<  number << "は100以上200より小さい" << endl;
//   } else {
//       cout <<  number << "は200以上" << endl;
//   }
// }
