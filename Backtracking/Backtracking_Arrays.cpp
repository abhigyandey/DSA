#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    // print our array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(int *arr, int i, int n, int val) {
    // base case
    if (i == n) {
        printArray(arr, n);
        return;
    }

    // recursive case: choose a value
    arr[i] = val;

    // explore with this choice
    fillArray(arr, i + 1, n, val + 1);

    // backtracking step: undo / modify this choice
    arr[i] = -1 * arr[i];
}

int main() {
    int n = 3;
    int arr[3];
    fillArray(arr, 0, n, 1);
    return 0;
}
