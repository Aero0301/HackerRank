#include <iostream>

using namespace std;

void compareTriplets(int* a, int* b, int* s){
    for (int i = 0; i<3 ; i++){
        if (a[i] > b[i])
            s[0] += 1;
        if (a[i] < b[i])
            s[1] += 1;
    }
 }

int main() {
    int s[2] = {};
    int a[3];
    int b[3];
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    compareTriplets(a, b, s);
    cout << s[0] << " " << s[1] << flush;
    return 0;
}
