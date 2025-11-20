#include <bits/stdc++.h>
using namespace std;

int printlargestSubArrays2(int arr[], int n) {
    
    int prefix[100] = {0};
    prefix[0] = arr[0];
    
    // FIXED: added loop variable i
    for (int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = INT_MIN;   // handle all-negative arrays

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            // ❌ You declared SubArraySum twice — removed the wrong one.
            // int SubArraySum = 0;

            // ✔️ Correct formula using prefix sum
            int SubArraySum = (i > 0) ? prefix[j] - prefix[i-1] : prefix[j];

            largest_sum = max(largest_sum, SubArraySum);
        }
    }
    return largest_sum;
}

int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << printlargestSubArrays2(arr, n) << endl;

    return 0;
}
