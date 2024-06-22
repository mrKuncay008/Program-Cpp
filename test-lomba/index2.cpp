#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Masukan Input: " << endl;

    int N;
    cin >> N;

    string A, B;
    cin >> B >> A;

    int main = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] > B[i]) {
            // Jika karakter di A lebih besar dari B, lakukan pertukaran
            int diff = A[i] / B[i];
            A[i] -= diff;
            main += diff;
        }
    }

    cout << main << endl;

    return 0;
}
