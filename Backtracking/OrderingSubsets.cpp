#include <bits/stdc++.h>
using namespace std;

void collectSubsets(char *input, char *output, int i, int j, vector<string> &subs) {
    // base case
    if (input[i] == '\0') {
        output[j] = '\0';
        subs.push_back(string(output));   // store current subset
        return;
    }

    // include ith character
    output[j] = input[i];
    collectSubsets(input, output, i + 1, j + 1, subs);

    // exclude ith character
    collectSubsets(input, output, i + 1, j, subs);
}

int main() {
    char input[100];
    char output[100];
    cin >> input;                     // e.g. "abc"

    vector<string> subs;
    collectSubsets(input, output, 0, 0, subs);

    sort(subs.begin(), subs.end());   // lexicographic order

    for (const string &s : subs) {
        if (s.empty())
            cout << "NULL";
        else
            cout << s;
        cout << endl;
    }

    return 0;
}
