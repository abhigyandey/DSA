#include <bits/stdc++.h>
using namespace std;

int printlargestSubArrays1(int arr[], int n) {
    int largest_sum = INT_MIN;   // handle all-negative arrays

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {   // j should start from i
            int SubArraySum = 0;

            for (int k = i; k <= j; k++) {
                SubArraySum += arr[k];  // accumulate properly
            }

            largest_sum = max(largest_sum, SubArraySum);
        }
    }
    return largest_sum;
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << printlargestSubArrays1(arr, n) << endl;

    return 0;
}
