#include <iostream>
using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5};

    int n = 5;
    int w = 3;

    int current = 0;

    for (int i = 0; i < w; i++) {
        current += a[i];
    }

    int maxx = current;

    for (int i = 1; i <= n - w; i++) {

        current = current - a[i -1] + a[i + w -1];

        if (current > maxx) {
            maxx = current;
        }
    }

    cout << maxx << endl;

    return 0;
}