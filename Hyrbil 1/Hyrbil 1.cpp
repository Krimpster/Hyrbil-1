// Hyrbil 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std; 


int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    int dagar;
    int mil;
    //Anger hur m�nga dagar bilen blir hyrd//
    cout << "Ange hur m�nga dagar bilen hyrs ut:";
    cin >> dagar;
    if (dagar <= 3) {
        //Anger hur m�nga mil bilen har k�rt//
        cout << "Ange hur m�nga mil bilen har g�tt:";
        cin >> mil;
        //Ber�knar dagspriset + milpriset och matar ut det//
        cout << "Den totala summan blir " << dagar * 500 + mil * 2 << "kr";
    }
    else {
        //Ber�knar dagspriset och matar ut det//
        cout << "Den totala summan blir " << dagar * 990 << "kr";
    }
    cin.get();
    cin.get();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
