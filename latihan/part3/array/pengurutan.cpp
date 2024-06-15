// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// void countSort (int nilai[], int input, int k) // deklarasi void nilai input
// {
//   int output[input];
//   int i, NILAI[input] = { 0 };
//   for (int i = 0; i < input; i++)
//     {
//       NILAI[(nilai[i] / k) % 10]++;
//     }

//   for (int i = 1; i < 10; i++)
//     {
//       NILAI[i] += NILAI[i - 1]; // proses perulangan NILAI + i - 1 = output
//     }

//   for (i = input - 1; i >= 0; i--)
//     {
//       output[NILAI[(nilai[i] / k) % 10] - 1] = nilai[i];
//       NILAI[(nilai[i] / k) % 10]--;
//     }
//   for (i = 0; i < input; i++)
//     {
//       nilai[i] = output[i];
//     }
// }

// void sortNumber (int nilai[], int input)
// {
//   int z = nilai[0];
//   for (int i = 1; i < input; i++)
//     { // proses void sort number nilai 0 = z < nilai[i]
//       if (z < nilai[i])
//         {
//           z = nilai[i];
//         }
//     }

//   int m = z;
//   for (int k = 1; m / k > 0; k *= 10)
//     {
//       countSort (nilai, input, k);
//     }
// }

// void print (int nilai[], int input)
// {
//   for (int i = 0; i < input; i++) // proses output nilai i
//     {
//       cout << nilai[i] << " ";
//     }
// }

// int main() {
//   int input;
//   cout << "------------------ pengurutan angka -------------\n\n";
//   cout << "Masukkan jumlah angka yang ingin diurutkan: ";
//   cin >> input;
//   int nilai[100];
//   for (int l = 0; l < input; l++) {
//     cout << "Masukkan angka ke-" << l + 1 << ": ";
//     cin >> nilai[l];
//   }
//   cout << "\nIni adalah data yang belum diurutkan:\n";
//   print(nilai, input);
//   cout << "\nIni adalah hasil pengurutan:\n";
//   sortNumber(nilai, input);
//   print(nilai, input);
//   return 0;
// }

#include <iostream>
using namespace std;

void countSort(int nilai[], int input, int k) {
  int output[input], NILAI[10] = {0};
  for (int i = 0; i < input; i++) {
    NILAI[(nilai[i] / k) % 10]++;
  }
  for (int i = 1; i < 10; i++) {
    NILAI[i] += NILAI[i - 1];
  }
  for (int i = input - 1; i >= 0; i--) {
    output[NILAI[(nilai[i] / k) % 10] - 1] = nilai[i];
    NILAI[(nilai[i] / k) % 10]--;
  }
  for (int i = 0; i < input; i++) {
    nilai[i] = output[i];
  }
}

void sortNumber(int nilai[], int input) {
  int maxNum = nilai[0];
  for (int i = 1; i < input; i++) {
    if (maxNum < nilai[i]) {
      maxNum = nilai[i];
    }
  }
  for (int k = 1; maxNum / k > 0; k *= 10) {
    countSort(nilai, input, k);
  }
}

void print(int nilai[], int input) {
  for (int i = 0; i < input; i++) {
    cout << nilai[i] << " ";
  }
  cout << endl;
}

int main() {
  int input;
  cout << "------------------ pengurutan angka -------------\n\n";
  cout << "Masukkan jumlah angka yang ingin diurutkan: ";
  cin >> input;
  int nilai[100];
  for (int l = 0; l < input; l++) {
    cout << "Masukkan angka ke-" << l + 1 << ": ";
    cin >> nilai[l];
  }
  cout << "\nIni adalah data yang belum diurutkan:\n";
  print(nilai, input);
  cout << "\nIni adalah hasil pengurutan:\n";
  sortNumber(nilai, input);
  print(nilai, input);
  return 0;
}
