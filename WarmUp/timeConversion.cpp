#include <iostream>

using namespace std;

int main() {
	string t;
	cin >> t;
	int a = 10 * (((int) t.at(0))-48) + (int) t.at(1)-48;
	if (a == 12 && t.at(8) == 'A'){
        a=0;
	}
	else if (t.at(8) == 'P' && a!=12) {
		a = a + 12;
	}
	if (a < 10){
        cout << '0' << a <<flush;
	}
	else{
        cout << a << flush;
	}
	for (int i = 2; i < 8; i++) {
		cout << t.at(i) << flush;
	}
	return 0;
}
