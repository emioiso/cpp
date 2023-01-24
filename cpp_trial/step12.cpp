#include <iostream>
using namespace std;

int main() {

	int number;
	cin >> number;
	cout << number << endl;

	if(number == 10){
		cout << number << "は10に等しい" << endl;
	} else if(number > 10){
		cout << number << "は10より大きい" << endl;
	} else {
		cout << number << "は10未満" << endl;
	}
}
// ===== 理解したこと =====
// 一行で変数と文字列を出力する書き方を理解した
