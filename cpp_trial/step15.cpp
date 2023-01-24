#include <iostream>
using namespace std;

int main() {
	int count;
	cin >> count;

	string name;

	for (int i = 0; i < count; i++) {
		cin >> name;
		cout << "Hello " <<  name << endl;
	}
}
