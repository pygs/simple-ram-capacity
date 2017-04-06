#include <iostream>
#include <stdlib.h>
#include <conio.h>

float pamiec, zegar, DDR1, DDR2, DDR3, typ;

using namespace std;

int main()
{
    START:
    cout << "Co chcesz zrobic?" << endl;
    cout << "\t 1. Oblicz przepustowosc pamieci DDR" << endl;
    cout << "\t 2. Oblicz przepustowosc pamieci DDR2" << endl;
    cout << "\t 3. Oblicz przepustowosc pamieci DDR3" << endl;
    cout << "\t 4. Oblicz czestotliwosc zegara magistrali pamieci DDR" << endl;
    cout << "\t 5. Oblicz czestotliwosc zegara magistrali pamieci DDR2" << endl;
    cout << "\t 6. Oblicz czestotliwosc zegara magistrali pamieci DDR3" << endl;
    WYBOR:
    cin >> pamiec;
    if (pamiec==1)
    {
        system("cls");
        cout << "Ile MHz ma zegar? ";
        cin >> zegar;
        DDR1 = zegar*2*64/8;
        cout << endl << "Wynik: " << DDR1;
        getch();
        goto START;
    }
    else if (pamiec==2)
    {
        system("cls");
        cout << "Ile MHz ma zegar? ";
        cin >> zegar;
        DDR2 = zegar*2*2*64/8;
        cout << endl << "Wynik: " << DDR2;
        getch();
        goto START;
    }
    else if (pamiec==3)
    {
        system("cls");
        cout << "Ile MHz ma zegar? ";
        cin >> zegar;
        DDR3 = zegar*2*4*64/8;
        cout << endl << "Wynik: " << DDR3;
        getch();
        goto START;
    }
    else if (pamiec==4)
    {
        system("cls");
        cout << "Jaki masz typ pamieci?" << endl;
        cout << "\t 1. PC-1600" << endl;
        cout << "\t 2. PC-2100" << endl;
        cout << "\t 3. PC-2700" << endl;
        cout << "\t 4. PC-3200" << endl;
        cout << "\t 5. PC-3500" << endl;
        TYP:
        cin >> typ;
    }
        if (typ==1)
        {
            cout << "Zegar magistrali = 100 MHz";
            getch();
            system("cls");
            goto START;
        }
        else if (typ==2)
        {
            cout << "Zegar magistrali = 133 MHz";
            getch();
            system("cls");
            goto START;
        }
        else if (typ==3)
        {
            cout << "Zegar magistrali = 166 MHz";
            getch();
            system("cls");
            goto START;
        }
        else if (typ==4)
        {
            cout << "Zegar magistrali = 200 MHz";
            getch();
            system("cls");
            goto START;
        }
        else if (typ==5)
        {
            cout << "Zegar magistrali = 216 MHz";
            getch();
            system("cls");
            goto START;
        }
        else
        {
            goto TYP;
        }
    else
    {
        goto WYBOR;
    }
    return 0;
}
