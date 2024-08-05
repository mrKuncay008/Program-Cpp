#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
Sample Input
3
11 2 4
4 5 6
10 8 -12

Sample Output
15
 */

int diagonalDifference(vector<vector<int>> arr) {
    int num1 = 0;
    for (int i = 0; i < arr.size(); i++) {
        num1 += (arr[i][i] - arr[i][arr.size() - 1 - i]);
    }
    return abs(num1);
}

int main()
{
    int n;
    cin >> n; // Read the size of the matrix

    vector<vector<int>> arr(n, vector<int>(n)); // Create a 2D vector with n x n size

    // Reading the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Compute and print the diagonal difference
    cout << diagonalDifference(arr) << endl;

    return 0;
}
