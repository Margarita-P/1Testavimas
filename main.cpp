#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

void skaiciavimas(string eilute, string &remelis1, string &remelis2, string &remelis3, string &remelis4)
{
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
}
void Male(string vardas, string remelis1, string remelis2, string remelis3, string remelis4)
{
    string eilute1 = "* Sveikas, ";
    eilute1 += vardas + "! *";
    skaiciavimas(eilute1, remelis1, remelis2, remelis3, remelis4);
    cout << remelis1 << endl;
    cout << remelis2 << endl;
    cout << eilute1 << endl;
    cout << remelis3 << endl;
    cout << remelis4 << endl;
}
void Female(string vardas, string remelis1, string remelis2, string remelis3, string remelis4)
{
    string eilute2 = "* Sveika, ";
    eilute2 += vardas + "! *";
    skaiciavimas(eilute2, remelis1, remelis2, remelis3, remelis4);
    cout << remelis1 << endl;
    cout << remelis2 << endl;
    cout << eilute2 << endl;
    cout << remelis3 << endl;
    cout << remelis4 << endl;
}
int main()
{
    string vardas;
    string remelis1;
    string remelis2 = "*";
    string remelis3;
    string remelis4;
    cout << "Iveskite savo varda\n";
    cin >> vardas;
    if (vardas.back() == 's')
        Male(vardas, remelis1, remelis2, remelis3, remelis4);
    else if (vardas.back() == 'a')
        Female(vardas, remelis1, remelis2, remelis3, remelis4);
    return(0);
}
