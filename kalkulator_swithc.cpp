#include <iostream>
#include <cmath>
using namespace std;
long double x, y;
void menu()
{
    cout<<"Wybierz opcje od 1 do 8 aby wykonac obliczenia\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie calkowite\n 5. Pierwiastek\n";
    cout<<" 6. Podnoszenie do kwadratu\n 7. Dzielenie z reszta\n 8. Procenty\n 9. Koniec\n M. Pokaz ta liste\n N. Zadeklaruj jeszcze raz liczby\n";
}
void liczby()
{
    cout<<"Podaj pierwsza liczbe: \n";
        cin>>x;

    cout<<"Podaj druga liczbe: \n";
        cin>>y;
    if(y==0)
        cout<<"Liczba druga jest zerem co oznacza ze nie bedzie mozna przez nia dzielic!\n";
    else
        cout<<"Obie liczby sa okej\n";
}

int main()
{
    cout<<"----Kalkulator oparty na funkcji switch----\n";
    liczby();
    menu();
    while(true)
    {
        char wybor;
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
            cout<<"Wybrales dodawanie\n Wynikiem dodawania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x+y<<endl;
            break;
        case '2':
            cout<<"Wybrales odejmowanie\n Wynikiem odejmowania liczb "<<x<<" oraz "<<y<<" jest liczba "<<x-y<<endl;
            break;
        case '3':
            cout<<"Wybrales mnozenie\n Wynikiem mnozenia liczb "<<x<<" oraz "<<y<<" jest liczba "<<x*y<<endl;
            break;
        case '4':
            if(y!=0)
            {
            cout<<"Wybrales dzielenie calkowite\n Wynikiem dzielenia calkowitego liczb "<<x<<" oraz "<<y<<" jest liczba "<<x/y<<endl;
            }
            else
            {
                cout<<"Nie mozna dzielic przez zero !\n Wpisz liczby jeszcze raz\n";
                liczby();
            }
            break;
        case '5':
            cout<<"Wybrales pierwiastkowanie\n";
            double pierwiastek;
            if (x>=0 && y>=0)
            {
                cout<<"Wpisz 1 aby pierwiastkowac pierwsza liczbe a 2 aby druga: ";
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
                cout<<"Pierwiastek z pierwszej liczby to "<<pierwiastek<<endl;
            }
            else if(x<0 && y>=0)
            {
                cout<<"Poniewaz pierwsza liczba jest ujemna, mozesz zpierwiastkowac druga liczbe poniewaz zadna liczba do kwadratu nie da liczby ujemnej\n";
                pierwiastek= sqrt (y);
                cout<<"Pierwiastek z drugiej liczby to "<<pierwiastek<<endl;
            }
            else
            {
                cout<<"Zadna liczba do kwadratu nie da liczby ujemnej !\n Nie mozna wykonac tej operacji\n";
            }
            break;
        case '6':
            cout<<"Wybrales podnoszenie do kwadratu\n Ktora liczbe chcesz podniesc do kwadratu (Wpisz 1 dla pierwszej a 2 dla drugiej): ";
            int wybor3;
            cin>>wybor3;
            if (wybor3==1)
            {
                cout<<"\n Liczba "<<x<<" podniesiona do kwadratu to "<<x*x<<endl;
            }
            else if (wybor3==2)
            {
                cout<<"\n Liczba "<<y<<" podniesiona do kwadratu to "<<y*y<<endl;
            }
            else
                cout<<"\n Mozesz wybrac tylko liczbe 1 lub 2\n \n";
            break;
        case '7':
            if (y!=0)
            {
            int dziel;
            dziel = x/y;
            cout<<" Wybrales dzielenie z reszta\n W dzieleniu z reszta liczby "<<x<<" przez liczbe "<<y<<" otzrymujemy "<<dziel<<" calosci oraz "<<fmod(x,y)<<" reszty "<<endl;
            }
            else
                cout<<"Nie mozna dzielic przez 0 !\n";
            break;
        case '8':
            float procenty;
            if(y!=0)
            {
                procenty=(x/y)*100;
                cout<<"Wybrales procenty\n Liczba "<<x<<" stanowi "<<procenty<<"% liczby "<<y<<endl;
            }
            else
            {
                cout<<"Liczba druga jest zerem wiec nie mozna obliczyc ile procent z niej stanowi liczba "<<x<<endl;
            }
            break;
        case '9':
            exit(0);
            break;
        default:
            cout<<"Nie ma takiej opcji\n";
            break;
        }
    }
    return 0;
}
