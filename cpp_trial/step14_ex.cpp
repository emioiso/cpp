// 標準入力で指定した回数を繰り返す
#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
//   cout << count << endl;

	string greeting = "Hello paiza";
//   cout << greeting << endl;

	for(int i = 0; i < count; i++){
		cout << greeting << endl;
	}
}
