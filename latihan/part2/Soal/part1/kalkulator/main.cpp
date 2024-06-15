#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char op;
    float no1, no2;

    cout << "masukan input op: +, -, *, / \n";
    cin >> op;

    cout << "masukan nilai pertama: ";
    cin >> no1;
    cout << "Masukan nilaike-2: ";
    cin >> no2;
    cout << endl;
    
    switch(op)
    {
        case '+' : cout << no1 << "+" << no2 << "=" << no1 + no2;
        cout << "\n";
        break;
        case '-' : cout << no1 << "-" << no2 << "=" << no1 + no2;
        cout << "\n";
        break;
        case '*' : cout << no1 << "*" << no2 << "=" << no1 + no2;
        cout << "\n";
        break;
        case '/' : cout << no1 << "/" << no2 << "=" << no1 + no2;
        cout << "\n";
        break;
    } 

    return 0;
}