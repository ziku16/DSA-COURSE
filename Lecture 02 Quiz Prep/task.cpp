#include <iostream>
using namespace std;

// Function to perform linear search on array A of size N
int linearSearch(int A[], int N, int item) {
    int i = 0;
    
    // Scan until item is found or end of array is reached
    while (i < N && A[i] != item) {
        i = i + 1;
    }
    
    // If within bounds, item was found at index i
    if (i < N) {
        return i;
    }
    
    // Element not found
    return -1;
}

int main() {
    int A[] = {40, 20, 10, 50, 10};
    int N = 5;
    int item = 40;

    int result = linearSearch(A, N, item);
    cout << result << endl; // Prints: 3

    return 0;
}