// 標準入力で指定した回数をデータを読み込む
#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
//   cout << count << endl;

	string name;

	for (int i = 0; i < count; i++) {
		cin >> name;
		cout << name << endl;
	}
}
