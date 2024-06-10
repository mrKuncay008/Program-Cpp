#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string A, B;
    cin >> A >> B;

    int operations = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] > B[i]) {
            // Jika karakter di A lebih besar dari B, lakukan pertukaran
            int diff = A[i] - B[i];
            A[i] -= diff;
            operations += diff;
        }
    }

    cout << operations << endl;

    return 0;
}

