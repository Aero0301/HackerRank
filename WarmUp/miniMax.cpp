#include <iostream>

using namespace std;

int main() {
	long long max = 0;
	long long min;
	long long sum = 0;
	long long int a[5];
	for (int i = 0 ; i < 5 ; i++) {
		cin >> a[i];
	}
	min = a[4] + a[1] + a[2] + a[3];
	for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 5; k++){
            if (k==j){
                continue;
            }
            sum += a[k];
        }
        if (sum > max){
            max = sum;
        }
        if (sum<min){
            min = sum;
        }
        sum=0;
	}
	cout << min << " " << max << flush;
	return 0;
}
