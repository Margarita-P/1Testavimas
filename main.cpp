#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
    string eilute = "* Sveiki, ";
    string vardas;
    string remelis1;
    string remelis2 = "*";
    string remelis3;
    string remelis4;
    cout << "Iveskite savo varda\n";
    cin >> vardas;
    eilute += vardas + "! *";
    int ilgis = 0;
    ilgis = eilute.length();
    while (ilgis > 0)
    {
        remelis1 += "*";
        ilgis--;
    }
    ilgis = eilute.length();
    while (ilgis > 0)
    {
        remelis2 += " ";
        ilgis--;
        if (ilgis == 2)
            remelis2 += "*"; 
    }
    remelis3 = remelis2;
    remelis4 = remelis1;
    cout << remelis1 << endl;
    cout << remelis2 << endl; 
    cout << eilute << endl;
    cout << remelis3 << endl;
    cout << remelis4 << endl;
}
