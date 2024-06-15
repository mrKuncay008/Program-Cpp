/************************
	membuat game sederhana 
	 yaitu tikocok
 ***********************/
#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;
// string
char kotak[10] = {
  '0',
  '1',
  '2',
  '3',
  '4',
  '5',
  '6',
  '7',
  '8',
  '9'
}; // string karakter
int cekwin(); // string si pemenang
void papan(); // string papan

/*************************************************
 * 			ini adalah kerangka permainan
 ** ************************************************/
int main() // start
{
  int player = 1, i, pilihan; // string pemain, menu permainan
  char mark;
  do {
    papan();
    player = (player % 2) ? 1 : 2;
    cout << "Pemain" << player << ", Masukan nomer: ";
    cin >> pilihan;
    mark = (player == 1) ? 'X' : 'O';

    if (pilihan == 1 && kotak[1] == '1')
      kotak[1] = mark;

    else if (pilihan == 2 && kotak[2] == '2')
      kotak[2] = mark;
    else if (pilihan == 3 && kotak[3] == '3')
      kotak[3] = mark;
    else if (pilihan == 4 && kotak[4] == '4')
      kotak[4] = mark;
    else if (pilihan == 5 && kotak[5] == '5')
      kotak[5] = mark;
    else if (pilihan == 6 && kotak[6] == '6')
      kotak[6] = mark;
    else if (pilihan == 7 && kotak[7] == '7')
      kotak[7] = mark;
    else if (pilihan == 8 && kotak[8] == '8')
      kotak[8] = mark;
    else if (pilihan == 9 && kotak[9] == '9')
      kotak[9] = mark;
    else {
      cout << "invalid move";
      player--;
      cin.ignore();
      cin.get();
    }

    i = cekwin();
    player++;

  } while (i == -1);
  papan();
  if (i == 1)

    cout << "==>\aPlayer" << --player << "win!!";
  else
    cout << "==>\aGame draw";

  cin.ignore();
  cin.get();
  return 0;
}

/* membuat fungtion/string untuk pemenang permaianan
 ***************************************************/
int cekwin() // string pemenang
{
  if (kotak[1] == kotak[2] && kotak[2] == kotak[3])

    return 1;
  else if (kotak[4] == kotak[5] && kotak[5] == kotak[6])

    return 1;
  else if (kotak[7] == kotak[8] && kotak[8] == kotak[9])

    return 1;
  else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])

    return 1;
  else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])

    return 1;
  else if (kotak[3] == kotak[6] && kotak[6] == kotak[9])

    return 1;
  else if (kotak[1] == kotak[5] && kotak[5] == kotak[9])

    return 1;
  else if (kotak[3] == kotak[5] && kotak[5] == kotak[7])

    return 1;
  else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' &&
    kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' &&
    kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9')

    return 0;
  else
    return -1;
}

/****************************
 	membuat kerangka papan
*****************************/
void papan() // karakter papan
{
  system("cls");
  cout << "\n\n\tTic Tac Toe Anying!\n\n";
  cout << "Aisma (X)  -  Poni (O)" << endl << endl;
  cout << endl;

  cout << "     |     |     " << endl;
  cout << "  " << kotak[1] << "  |  " << kotak[2] << "  |  " << kotak[3] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << kotak[4] << "  |  " << kotak[5] << "  |  " << kotak[6] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << kotak[7] << "  |  " << kotak[8] << "  |  " << kotak[9] << endl;

  cout << "     |     |     " << endl << endl;
}

/*************************************
				END
********************************3****/