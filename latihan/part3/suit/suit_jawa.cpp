#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
    int comp, player;
    
    cout << "\t\t -------- ----- Program Suit gunting,batu,kertas --------\n";
    cout << "\t\t                        by mrkuncay                       \n";
    cout << "\t Masukan Nama mu: \n";
    cout << "\t\t 1. Batu \n";
    cout << "\t\t 2. kertas \n";
    cout << "\t\t 3. Gunting \n";
    cout << "\t\t Pilih salah satu";
    
    cin >> player;
    comp = rand() % 3 + 1;
    
    switch(comp) 
    {
        case 1:
            cout << "\n\t\tComputer milih Batu\n";
            break;
        case 2:
            cout << "\n\t\tComputer milih Kertas\n";
            break;
        case 3:
            cout << "\n\t\tComputer milih Gunting\n";
            break;
    }
    
    if(player == comp) {
        cout << " \tSeri !!" << endl;
    }
    
    else if(player == 1 && comp == 3) {
        cout <<  "\tPlayer menang !!" << endl;
    }
    
     else if(player == 2 && comp == 1) {
        cout << "\tPlayer menang !!" << endl;
    }
    
     else if(player == 3 && comp == 2) {
        cout << "\tPlayer menang !!" << endl;
    }
    else {
        cout << "\tPlayer kalah" << endl;
    }
    return 0;
}


