#include <bits/stdc++.h>
using namespace std;

int main() {
       
        vector<vector<int>> arr = {
        {1,  2,  3},      // Row 1
        {4,  5,  6},      // Row 2
        {7,  8,  9},      // Row 3
        {10, 11, 12}      // Row 4
    };
    
    arr [0][0] += 10;
    
    for (int i=0; i < arr.size(); i++){
        for(int number: arr[i]){
            cout << number;
        }
        cout << endl;
    }

}
