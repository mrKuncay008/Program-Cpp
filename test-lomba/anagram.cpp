#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

void generatePermutations(string str, int l, int r, set<int>& permutations) {
    if (l == r) {
        if (str[0] != '0') { // Ignore permutations starting with '0'
            permutations.insert(stoi(str));
        }
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            generatePermutations(str, l + 1, r, permutations);
            swap(str[l], str[i]); // backtrack
        }
    }
}

int findMinimumDifference(string N) {
    int originalNumber = stoi(N);
    set<int> permutations;

    generatePermutations(N, 0, N.length() - 1, permutations);

    int minDifference = INT_MAX;
    for (int perm : permutations) {
        int difference = abs(originalNumber - perm);
        if (difference > 0 && difference < minDifference) {
            minDifference = difference;
        }
    }

    return minDifference;
}

int main() {
    string N;
    cout << "Masukan Input " << endl;
    cin >> N;

    int minDifference = findMinimumDifference(N);
    cout << " " << minDifference << endl;

    return 0;
}
