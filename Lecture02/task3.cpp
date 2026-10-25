#include <iostream>
using namespace std;

int main() {

    int a[] = {8, 3, 12, 5, 20, 7};

    int length = 6;

    int max1;
    int max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    }
    else {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < length; i++) {

        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    cout << "Maximum = " << max1 << endl;
    cout << "Second Maximum = " << max2 << endl;

    return 0;
}