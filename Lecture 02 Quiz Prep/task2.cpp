#include <iostream>
using namespace std;

int binarySearch(int A[], int N, int item) {

    int B = 0;
    int E = N - 1;

    while (B <= E) {

        int mid = (B + E) / 2;

        if (A[mid] == item) {
            return mid;
        }
        else if (item > A[mid]) {
            B = mid + 1;
        }
        else {
            E = mid - 1;
        }
    }

    return -1;
}

int main() {

    int A[] = {10, 20, 30, 40, 50, 60, 70};

    int N = 7;
    int item = 70;

    int result = binarySearch(A, N, item);

    cout << result << endl;

    return 0;
}