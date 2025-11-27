#include <iostream>
using namespace std;

void findSubsets(char *input, char *output, int i, int j) {
    // base case
    if (input[i] == '\0') {
        output[j] = '\0';       // end the current subset string

        if (output[0] == '\0')  // if nothing was chosen → empty subset
            cout << "NULL";
        
        cout << output << endl;
        return;
    }

    // ----- recursive case -----

    // 1) Include the i-th character
    output[j] = input[i];
    findSubsets(input, output, i + 1, j + 1);

    // 2) Exclude the i-th character
    findSubsets(input, output, i + 1, j);
}

int main() {
    char input[100];
    char output[100];

    cin >> input;                       // e.g. "abc"
    findSubsets(input, output, 0, 0);   // prints all subsets
    return 0;
}
