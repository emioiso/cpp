#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;

	int number;
	for (int i = 0; i < count; i++) {
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
}
