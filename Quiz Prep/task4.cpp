#include <iostream>
using namespace std;

bool twoPointer(int arr[], int N, int target) {

    int left = 0;
    int right = N - 1;

    while (left < right) {

        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            return true;
        }
        else if (current_sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return false;
}

int main() {

    int arr[] = {1, 2, 3, 4, 6, 8};

    int N = 6;
    int target = 10;

    bool result = twoPointer(arr, N, target);

    if (result) {
        cout << "Pair found" << endl;
    }
    else {
        cout << "Pair not found" << endl;
    }

    return 0;
}