#include <iostream>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;
float x, y;
int kolor=7;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

void kolorki()
{
    switch(kolor){
        case 11:
            SetConsoleTextAttribute(color,11);
            break;
        case 12:
            SetConsoleTextAttribute(color,12);
            break;
        case 13:
            SetConsoleTextAttribute(color,13);
            break;
        case 14:
            SetConsoleTextAttribute(color,14);
            break;
        case 6:
            SetConsoleTextAttribute(color,6);
            break;
        case 9:
            SetConsoleTextAttribute(color,9);
            break;
        default:
            SetConsoleTextAttribute(color,7);
            break;
    }
    kolor=0;
}
void wypisz_wynik()
{
    kolor=11;
    kolorki();
}
void menu()
{
    wypisz_wynik();
    cout<<"--- Wybierz opcje od 1 do 8 aby wykonac obliczenia ---\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie calkowite\n 5. Pierwiastek\n";
    cout<<" 6. Podnoszenie do kwadratu\n 7. Dzielenie z reszta\n 8. Procenty\n 9. Koniec\n M. Pokaz ta liste\n N. Zadeklaruj jeszcze raz liczby\n";
    kolorki();

}
void informacja()
{

    kolor=14; kolorki(); cout<<"\n[";
    kolor=12; kolorki(); cout<<"!";
    kolor=14; kolorki(); cout<<"]";
}
void liczby()
{
    kolor=6; kolorki(); cout<<"\n Podaj pierwsza liczbe: ";
    while(!(cin>>x))
    {
        informacja();
        cout<<" Podales niewlasciwa liczbe !\n Prosze podac poprawna pierwsza liczbe: "; cin>>x;
        cin.clear();
        cin.ignore();

    }
    kolor=6; kolorki();
    cout<<"\n Podaj druga liczbe: ";
    while(!(cin>>y))
    {
        informacja();
        cout<<" Podales niewlasciwa liczbe !\n Prosze podac poprawna druga liczbe: "; cin>>y;
        cin.clear();
        cin.ignore();
    }
    if(y==0)
    {
        kolor=12; kolorki();
        cout<<"\n Liczba druga jest zerem co oznacza ze nie bedzie mozna przez nia dzielic!\n";
    }
    else
    {
        informacja();
        cout<<" Obie liczby sa okej\n";
        kolorki();
    }


}


int main()
{
    cout<<"----Kalkulator oparty na funkcji switch----\n"; kolor=14; kolorki();
    cout<<"Made by @AndreansxTech on Github\n";
    liczby();
    menu();
    while(true)
    {
        char wybor;
        kolor=7; kolorki();
        cout<<"\n Wybierz ktoras z opcji z listy: "; kolor=9; kolorki();
        cin>>wybor;
        switch(wybor)
        {
        case 'M':
        case 'm':
            menu();
            break;
        case 'N':
        case 'n':
            liczby();
            break;
        case '1':
            informacja();
            cout<<" Wybrales dodawanie\n";
            wypisz_wynik(); cout<<" Wynikiem dodawania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x+y<<endl;
            break;
        case '2':
            informacja();
            cout<<" Wybrales odejmowanie\n";
            wypisz_wynik();
            cout<<" Wynikiem odejmowania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x-y<<endl;
            break;
        case '3':
            informacja();
            cout<<" Wybrales mnozenie\n";
            wypisz_wynik();
            cout<<" Wynikiem mnozenia liczb "<<x<<" oraz "<<y<<" jest liczba "<<x*y<<endl;
            break;
        case '4':
            if(y!=0)
            {
            informacja();
            cout<<" Wybrales dzielenie calkowite\n"; wypisz_wynik();
            cout<<" Wynikiem dzielenia calkowitego liczb "<<x<<" oraz "<<y<<" jest liczba "<<x/y<<endl;
            }
            else
            {
                kolor=12; kolorki();
                cout<<"Nie mozna dzielic przez zero !\n Wpisz liczby jeszcze raz";
                liczby();
            }
            break;
        case '5':
            informacja();
            cout<<" Wybrales pierwiastkowanie\n";
            float pierwiastek;
            if (x>=0 && y>=0)
            {
                kolor=13; kolorki();
                cout<<"\n Z ktorej liczby chcesz obliczyc pierwiastek (wpisz 1 aby pierwiastkowac pierwsza liczbe a 2 aby druga): ";
                char wybor2;
                cin>>wybor2;
                wypisz_wynik();
                switch(wybor2)
                {
                case '1':
                    pierwiastek=sqrt(x);
                    cout<<"\n Pierwiastek z liczby "<<x<<" to: "<<pierwiastek<<endl;
                    break;
                case '2':
                    pierwiastek=sqrt(y);
                    cout<<"\n Pierwiastek z liczby "<<y<<" to: "<<pierwiastek<<endl;
                    break;
                default:
                    kolor=12; kolorki();
                    cout<<"\n Mozesz wybrac tylko 1 lub 2 \n";
                    break;
                }
                /*if (wybor2==1)
                {
                    pierwiastek= sqrt (x);
                    cout<<"\n Pierwiastek z pierwszej liczby to: "<<pierwiastek<<endl;
                }
                else if (wybor2==2)
                {
                    pierwiastek= sqrt (y);
                    cout<<"Pierwiastek z drugiej liczby to: "<<pierwiastek<<endl;
                }
                else
                {
                    informacja(); cout<<" Mozesz wybrac tylko 1 lub 2 \n";
                }*/
            }
            else if(x>=0 && y<0)
            {
                informacja();
                cout<<"Poniewaz druga liczba jest ujemna, mozesz zpierwiastkowac tylko pierwsza liczbe poniewaz zadna liczba do kwadratu nie da liczby ujemnej\n";
                pierwiastek= sqrt (x); wypisz_wynik();
                cout<<"Pierwiastek z pierwszej liczby to "<<pierwiastek<<endl;
            }
            else if(x<0 && y>=0)
            {
                informacja();
                cout<<"Poniewaz pierwsza liczba jest ujemna, mozesz zpierwiastkowac druga liczbe poniewaz zadna liczba do kwadratu nie da liczby ujemnej\n";
                pierwiastek= sqrt (y); wypisz_wynik();
                cout<<"Pierwiastek z drugiej liczby to "<<pierwiastek<<endl;
            }
            else
            {
                kolor=12; kolorki();
                cout<<"Zadna liczba do kwadratu nie da liczby ujemnej !\n Nie mozna wykonac tej operacji\n";
            }
            break;
        case '6':
            informacja();
            cout<<" Wybrales podnoszenie do kwadratu\n"; kolor=13; kolorki();
            cout<<" Ktora liczbe chcesz podniesc do kwadratu (Wpisz 1 dla pierwszej a 2 dla drugiej): ";
            int wybor3;
            cin>>wybor3;
            wypisz_wynik();
            if (wybor3==1)
            {
                cout<<"\n Liczba "<<x<<" podniesiona do kwadratu to "<<x*x<<endl;
            }
            else if (wybor3==2)
            {
                cout<<"\n Liczba "<<y<<" podniesiona do kwadratu to "<<y*y<<endl;
            }
            else
            {
                kolor=12; kolorki(); cout<<"\n Mozesz wybrac tylko liczbe 1 lub 2\n";
            }
            break;
        case '7':
            if (y!=0)
            {
                int dziel;
                dziel = x/y;
                informacja();
                cout<<" Wybrales dzielenie z reszta\n"; wypisz_wynik();
                cout<<" W dzieleniu z reszta liczby "<<x<<" przez liczbe "<<y<<" otzrymujemy "<<dziel<<" calosci oraz "<<fmod(x,y)<<" reszty "<<endl;
            }
            else
            {
                kolor=12; kolorki();
                cout<<"Nie mozna dzielic przez 0 !\n";
            }
            break;
        case '8':
            float procenty;
            if(y!=0)
            {
                informacja();
                procenty=(x/y)*100;
                cout<<" Wybrales procenty\n";
                wypisz_wynik();
                cout<<" Liczba "<<x<<" stanowi "<<procenty<<"% liczby "<<y<<endl;
            }
            else
            {
                informacja();
                cout<<" Liczba druga jest zerem wiec nie mozna obliczyc ile procent z niej stanowi liczba "<<x<<endl;
            }
            break;
        case '9':
            char wyjscie_wybor;
            informacja(); cout<<" Opuszczasz program\n"; kolor=9; kolorki();
            cout<<"Czy napewno chcesz wyjsc? (T/Y aby wyjsc, N aby zostac): ";
            cin>>wyjscie_wybor;
            switch(wyjscie_wybor)
            {
            case 'T':
            case 'Y':
            case 't':
            case 'y':
                {
                    informacja(); cout<<" Closing Ka1kulat0r_v0.2.";
                    int slep=0;
                    while(slep<4)
                    {
                        Sleep(500);
                        cout<<".";
                        slep+=1;
                    }
                    exit(0);
                }
            case 'n':
            case 'N':
                    informacja(); cout<<" Zostajesz w programie !\n"; break;
            default:
                    kolor=12; kolorki(); cout<<" Nie ma takiej opcji \n"; break;
            }
            break;
        default:
            {
                kolor=12; kolorki();
                cout<<"Nie ma takiej opcji\n";
                break;
            }

        }
    }
    return 0;
}
