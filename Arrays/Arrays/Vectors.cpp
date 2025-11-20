#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 10, 12, 15};
    
    cout << "size :" << arr.size() << endl;
    
    arr.push_back(16);
    
    cout << "size :" << arr.size() << endl;
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    
    cout << "capacity :" << arr.capacity() << endl;
    
    arr.pop_back();

    cout << "after pop_back, size :" << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    
    // New vector with 10 elements, all 7
    vector<int> arr2(10, 7);
    
    cout << "arr2 contents:" << endl;
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << endl;
    }
    
    // visited array of size 100, all 0
    vector<int> visited(100, 0);
    
    cout << "visited (first 20 entries):" << endl;
    for (int i = 0; i < 20; i++) {   // don't spam all 100, just a sample
        cout << visited[i] << endl;
    }

    return 0;
}
