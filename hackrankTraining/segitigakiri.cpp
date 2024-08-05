#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    for(int i = 1; i <= n; i++) {
        string s(n-i, ' '), e(i, '#');
        cout << s + e << endl;
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);

    return 0;
}
