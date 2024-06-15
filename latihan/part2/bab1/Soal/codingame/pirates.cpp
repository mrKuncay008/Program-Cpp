#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.

Baris 1: Lebar W dari peta harta karun.
 Baris 2: Tinggi H dari peta harta karun.
 Garis H berikutnya: Simbol W (0 atau 1) menunjukkan ruang kosong (0) atau rintangan (1).

 Harta ditempatkan di ruang bebas yang hanya dikelilingi oleh rintangan.

 Ada tiga kemungkinan cara di mana harta itu dapat dikelilingi:
 Dengan 3 rintangan saat harta berada di sudut peta.
 Dengan 5 rintangan saat harta karun itu berada di tepi peta.
 Dengan 8 rintangan saat harta karun itu ada di dalam peta.
 Keluaran
 Koordinat harta karun di peta diwakili oleh indeks yang dipisahkan oleh spasi.  Misalnya: "12 5"

 Posisi "0 0" ada di pojok kiri atas, jadi indeks maksimum x adalah W-1 dan indeks maksimum y adalah H-1.
 Kendala
 * 2 <= W <= 25
 * 2 <= H <= 25
 * Hanya 1 harta di peta.


 **/

int W, H;

void check(int i, int j, int map[H][W]) {
  int indexes[5] = {
    i - 1,
    i + 1,
    j - 1,
    j + 1,
    0
  };
  if (map[i][j] != 0)
    return;
  if (i == H - 1) {
    indexes[1] = i;
    ++indexes[4];

    else if (i == 0) {
      indexes[0] = i;
      ++indexes[4];

      if (j == W - 1)

      {
        indexes[3] = j;
        ++indexes[4];
        else if (j == 0)

        {
          indexes[2] = j;
          ++indexes[4];

        }
      }
    }
  }

  int l_cmpt = 0;
  for (int c = indexes[0]; c <= indexes[1]; ++c)
    for (int d = indexes[2]; d <= indexes[3]; ++d) l_cmpt += map[c][d];
  if ((l_cmpt == 8) || ((l_cmpt == 5) && (indexes[4] == 1)) || ((l_cmpt == 3) && (indexes[4] == 2)))
    cout << j << i;
}

void main() {
    cin >> W;
    cin >> H;
    int map[H][W];
    for (int i = 0; i < H; i++)
      for (int j = 0; j < W; j++)
        cin >> map[i][j];
    for (int i = 0; i < H; i++)
      for (int j = 0; j < W; j++)
        check(i, j, map);
        
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "x y" << endl;
}
