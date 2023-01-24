// ゼロ・プラス・マイナスを繰り返し判定する
#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	cout << count << endl;

	int number;

	for (int i = 0; i < count; i++) {
	cin >> number;
	// cout << number << " " << endl;

		if(number == 0){
			cout << number << "は0" << endl;
		} else if(number >= 0){
			cout << number << "はプラス" << endl;
		} else {
			cout << number << "はマイナス" << endl;
		}
	}
}
