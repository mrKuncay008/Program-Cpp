#include <bits/stdc++.h>

using namespace std;


void plusMinus(vector<int> arr) {
   int positive = 0;
    int negative = 0;
    int zero = 0;
    int a = arr.size();

    for(int i = 0; i < a; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else { 
            zero++;
        }
    }
    
    double douPos = (double)positive / a;
    double douNeg = (double)negative / a;
    double douZero = (double)zero / a;
    
        cout << douPos << endl;
        cout << douNeg << endl;
        cout << douZero << endl ;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Membaca elemen-elemen vector
    }
    plusMinus(arr);

    return 0;
}

