#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// HackerRank (Easy) | Arrays - DS | https://www.hackerrank.com/challenges/arrays-ds/problem

int main() {
    int n;

    if (!(cin >> n)) {
        return 0;
    }
    
    vector<int> array(n);
    
    for (int i = 0; i < n; ++i) {
        if (!(cin >> array[i])) {
            return 0;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << array[i];
        if (i > 0) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
