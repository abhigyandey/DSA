#include <iostream>
using namespace std;

int gridWays(int i, int j, int m, int n) {
    // base case: reached bottom-right cell
    if (i == m - 1 && j == n - 1) {
        return 1;
    }

    // out of bounds → no way
    if (i >= m || j >= n) {
        return 0;
    }

    // move down (i+1, j) + move right (i, j+1)
    int ans = gridWays(i + 1, j, m, n) +
              gridWays(i, j + 1, m, n);
    return ans;
}

int main() {
    int m, n;
    cin >> m >> n;              // rows, columns
    cout << gridWays(0, 0, m, n);
    return 0;
}
