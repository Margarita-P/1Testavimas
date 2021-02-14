#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

void skaiciavimas(string eilute, string& remelis, string& remelis1)
{
    int ilgis = 0;
    ilgis = eilute.length();
    while (ilgis > 0)
    {
        remelis += "*";
        ilgis--;
    }
    ilgis = eilute.length();
    while (ilgis > 0)
    {
        remelis1 += " ";
        ilgis--;
        if (ilgis == 2)
            remelis1 += "*"; 
    }
}
void print(string remelis, string remelis1, int plotis, string eilute)
{
    int plotis1 = plotis;
    cout << remelis << endl;
    for (int i = 0; i < (plotis - 2) / 2; i++)
        cout << remelis1 << endl;
    cout << eilute << endl;
    for (int i = 0; i < (plotis1 - 2)/ 2; i++)
        cout << remelis1 << endl;
    cout << remelis << endl;
}
void Male(string vardas, string remelis, string remelis1, int plotis)
{
    string eilute1 = "* Sveikas, ";
    eilute1 += vardas + "! *";
    skaiciavimas(eilute1, remelis, remelis1);
    print(remelis,remelis1,plotis,eilute1);
}
void Female(string vardas, string remelis, string remelis1, int plotis)
{
    string eilute2 = "* Sveika, ";
    eilute2 += vardas + "! *";
    skaiciavimas(eilute2, remelis, remelis1);
    print(remelis, remelis1, plotis, eilute2);
}
int main()
{
    string vardas;
    string remelis;
    string remelis1 = "*";
    int plotis = 0;
    cout << "Iveskite savo varda\n";
    cin >> vardas;
    cout << "iveskite remelio ploti" << endl;
    cin >> plotis;    
    if (plotis % 2 == 0 && plotis < 3)
    {
        cout << " ivedete neteisinga skaiciu" << endl;
        return(0);
    }    
    if (vardas.back() == 's')
        Male(vardas, remelis, remelis1, plotis);
    else if (vardas.back() == 'a')
        Female(vardas, remelis, remelis1, plotis);
    return(0);
}
