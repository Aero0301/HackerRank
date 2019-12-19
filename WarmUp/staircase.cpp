#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i++){
        for (int j = 0; j< n-i-1; j++){
            cout << " " << flush;
        }
        for (int k = n-i-1; k < n; k++){
            cout << "#" << flush;
        }
        cout << endl;
	}
	return 0;
}
