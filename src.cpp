#include <iostream>
#include <stdlib.h>

float pamiec, zegar, DDR1, DDR2, DDR3;

using namespace std;

int main()
{
    cout << "Jaka pamiec?" << endl;
    cout << "\t 1. DDR" << endl;
    cout << "\t 2. DDR2" << endl;
    cout << "\t 3. DDR3" << endl;
    START:
    cin >> pamiec;
    if (pamiec==1)
    {
        system("cls");
        cout << "Ile MHz ma twoja kosc? ";
        cin >> zegar;
        DDR1 = zegar*2*64/8;
        cout << endl << "Wynik: " << DDR1;
    }
    else if (pamiec==2)
    {
        system("cls");
        cout << "Ile MHz ma twoja kosc? ";
        cin >> zegar;
        DDR2 = zegar*2*2*64/8;
        cout << endl << "Wynik: " << DDR2;
    }
    else if (pamiec==3)
    {
        system("cls");
        cout << "Ile MHz ma twoja kosc? ";
        cin >> zegar;
        DDR3 = zegar*2*4*64/8;
        cout << endl << "Wynik: " << DDR3;
    }
    else
    {
        goto START;
    }
    return 0;
}
