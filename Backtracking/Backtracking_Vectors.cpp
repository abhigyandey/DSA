#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int> &arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void fillVector(vector<int> &arr, int i, int n, int val) {
    // base case
    if (i == n) {
        printVector(arr);
        return;
    }

    // recursive case: choose a value
    arr[i] = val;

    // explore with this choice
    fillVector(arr, i + 1, n, val + 1);

    // backtracking step: undo / modify this choice
    arr[i] = -1 * arr[i];
}

int main() {
    int n = 3;
    vector<int> arr(n);   // vector of size n
    fillVector(arr, 0, n, 1);
    return 0;
}
