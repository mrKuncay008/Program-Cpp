#include <iostream>

using namespace std;

int main() {

    int a;
    cout << "\n################\n";

    cout << "1. while\n";
    cout << "2. for\n";
    cout << "3. do-while\n";
    
    cout << "Masukan pilihan\n";
    cin >> a;

    switch(a) {
    case 1:
        while(a < 5) {
            cout << a << endl;
            a++;
            
          }

    case 2:
        for(a= 0; a <=10; a++) {
            cout << a << endl;   
        }

    case 3:
        do {
            cout << a << endl;
            a++;
        }
        while (a < 10);
    }

    cout << "Program finished...: ";
    return 0;
}