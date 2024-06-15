#include <iostream>

using namespace std;

int main() {

    int segitiga;

    cout << "####### Macam-macam segitiga Bintang ######\n";

    cout << "1. Sama Kaki\n";
    cout << "2. Sama Kaki Terbalik\n";
    cout << "3. Segitiga Setengah\n";
    cout << "4. Belah Ketupat\n";
    
    cout << "Masukan pilihan\n";
    cin >> segitiga;

    switch(segitiga) {
    
    case 1:
        segitiga = 10;

        for (int i = 1; i <= segitiga; i++)
        {
            for ( int x = i; x < segitiga ; x++)
                
                 cout << " "; 

            for ( int y = 1; y <= i; y++)

                 cout << "* "; cout << "\n"; 
        }
        break;

    case 2:
        
        segitiga = 10;

        for (int i = segitiga; i >= 1; i--)
        {
            for ( int x = i; x < segitiga ; x++)
                
                 cout << " "; 

            for ( int y = 1; y <= i; y++)

                 cout << "* "; cout << "\n"; 
        }
        break;

    case 3:
        segitiga = 10;
        for (int i = 1; i <= segitiga; ++i)
        {
            for (int x = 1; x <= i; ++x)
            
            cout << "* ";
            cout << "\n";
        }
        break;

    case 4:

        int c = 10/2;
        segitiga = 5;

               for(int i = 1; i <= c; i++) {
               
                       for(int f = c; f > i; f--) {
                       
                               cout << " ";
                       }
               for (int j = 1; j <= segitiga; j++) {
               
                       cout << "*";
               }
                       segitiga += 2;
                       cout << "\n";
               }

               segitiga -= 4;
               for(int i = (c-1); i >= 1; i--) {
               
                       for ( int f = i; f <= (c-1); f++) {             

                               cout << " ";
                       }
                       for( int j = segitiga; j >= 1; j--) {
                               
                               cout << "*";
                       }       
                               segitiga -= 2;
                               cout << "\n";
                       
               }
               break;
    }

    cout << "Program finished...: ";
    return 0;
}