#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
using namespace std;
long double x, y;
int kolor=7;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
void kolorki()
{
    //int kolor;
    /*if (kolor==11)
        SetConsoleTextAttribute(color,11);
    else if(kolor==12)
        SetConsoleTextAttribute(color,12);
    else if(kolor==13)
        SetConsoleTextAttribute(color,13);
    else if(kolor==6)
        SetConsoleTextAttribute(color,8);
    else
        SetConsoleTextAttribute(color,7);
*/
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
        default:
            SetConsoleTextAttribute(color,7);
            break;

    }

    //cout<<"kontrolnie kolorek: "<<kolor<<endl;
    kolor=0;
}
void menu()
{
    kolor=11;
    kolorki();
    cout<<"Wybierz opcje od 1 do 8 aby wykonac obliczenia\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie calkowite\n 5. Pierwiastek\n";
    cout<<" 6. Podnoszenie do kwadratu\n 7. Dzielenie z reszta\n 8. Procenty\n 9. Koniec\n M. Pokaz ta liste\n N. Zadeklaruj jeszcze raz liczby\n";
    kolorki();
}
void liczby()
{
    kolor=6; kolorki(); cout<<"\n Podaj pierwsza liczbe: ";
        cin>>x;

    cout<<"\n Podaj druga liczbe: ";
        cin>>y;
    if(y==0)
    {
        kolor=12; kolorki();
        cout<<"Liczba druga jest zerem co oznacza ze nie bedzie mozna przez nia dzielic!\n";
    }
    else
    {
        cout<<"Obie liczby sa okej\n";
        kolorki();
    }

}
void informacja()
{
    kolor=14; kolorki(); cout<<"[";
    kolor=12; kolorki(); cout<<"!";
    kolor=14; kolorki(); cout<<"]";
}

int main()
{
    cout<<"----Kalkulator oparty na funkcji switch----\n";
    liczby();
    menu();
    while(true)
    {
        char wybor;
        kolor=7; kolorki();
        cout<<"Wybierz ktoras z opcji z listy: ";
        cin>>wybor;
        cout<<"\n";
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
            kolor=11; kolorki(); cout<<" Wynikiem dodawania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x+y<<endl;
            break;
        case '2':
            informacja();
            cout<<" Wybrales odejmowanie\n";
            kolor=11; kolorki();
            cout<<" Wynikiem odejmowania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x-y<<endl;
            break;
        case '3':
            informacja();
            cout<<" Wybrales mnozenie\n";
            kolor=11; kolorki();
            cout<<" Wynikiem mnozenia liczb "<<x<<" oraz "<<y<<" jest liczba "<<x*y<<endl;
            break;
        case '4':
            if(y!=0)
            {
            informacja();
            cout<<" Wybrales dzielenie calkowite\n"; kolor=11; kolorki();
            cout<<" Wynikiem dzielenia calkowitego liczb "<<x<<" oraz "<<y<<" jest liczba "<<x/y<<endl;
            }
            else
            {
                kolor=12; kolorki();
                cout<<"Nie mozna dzielic przez zero !\n Wpisz liczby jeszcze raz\n";
                liczby();
            }
            break;
        case '5':
            informacja();
            cout<<" Wybrales pierwiastkowanie\n";
            double pierwiastek;
            if (x>=0 && y>=0)
            {
                kolor=13; kolorki();
                cout<<"Z ktorej liczby chcesz obliczyc pierwiastek (wpisz 1 aby pierwiastkowac pierwsza liczbe a 2 aby druga): ";
                int wybor2;
                cin>>wybor2;
                if (wybor2==1)
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
                    cout<<"Mozesz wybrac tylko 1 lub 2 \n";
            }
            else if(x>=0 && y<0)
            {
                cout<<"Poniewaz druga liczba jest ujemna, mozesz zpierwiastkowac tylko pierwsza liczbe poniewaz zadna liczba do kwadratu nie da liczby ujemnej\n";
                pierwiastek= sqrt (x);
                kolor=11; kolorki();
                cout<<"Pierwiastek z pierwszej liczby to "<<pierwiastek<<endl;
            }
            else if(x<0 && y>=0)
            {
                cout<<"Poniewaz pierwsza liczba jest ujemna, mozesz zpierwiastkowac druga liczbe poniewaz zadna liczba do kwadratu nie da liczby ujemnej\n";
                pierwiastek= sqrt (y);
                kolor=11; kolorki();
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
            kolor=11; kolorki();
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
                kolor=12; kolorki();
                cout<<"\n Mozesz wybrac tylko liczbe 1 lub 2\n \n";
            }
            break;
        case '7':
            if (y!=0)
            {
                int dziel;
                dziel = x/y;
                informacja();
                cout<<" Wybrales dzielenie z reszta\n"; kolor=11; kolorki();
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
                kolor=11; kolorki();
                cout<<" Liczba "<<x<<" stanowi "<<procenty<<"% liczby "<<y<<endl;
            }
            else
            {
                cout<<" Liczba druga jest zerem wiec nie mozna obliczyc ile procent z niej stanowi liczba "<<x<<endl;
            }
            break;
        case '9':
            exit(0);
            //break;
        default:
            kolor=12; kolorki();
            cout<<"Nie ma takiej opcji\n";
            break;
        }
    }
    return 0;
}
