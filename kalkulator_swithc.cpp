#include <iostream>
#include <cmath>
using namespace std;
float x, y = 0.0;
void menu()
{
    cout<<"Wybierz opcje od 1 do 8\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie calkowite\n 5. Pierwiastek\n";
    cout<<" 6. Kwadrat\n 7. Dzielenie z reszta\n 8. \n 9. Koniec\n 0. Pokaz ta liste\n";
    cout<<"!kontrolnie: uruchomiono funkcje menu\n";
}
void liczby()
{
    cout<<"Podaj pierwsza liczbe: \n";
        cin>>x;

    cout<<"Podaj druga liczbe: \n";
        cin>>y;
}
/*void pierwiastkowanie()
{

    cout<<"Wybrales pierwiastkowanie\n Ktora liczbe chcesz zpierwiastkowac: ";
    double pierwiastek;
    int wybor2;
    cin>>wybor2;
    if (wybor2==1)
        {
            pierwiastek= sqrt (x);
            cout<<"Pierwiastek z pierwszej liczby to: "<<pierwiastek<<endl;
        }
    else if (wybor2==2)
        {
            pierwiastek= sqrt (y);
            cout<<"Pierwiastek z drugiej liczby to: "<<pierwiastek<<endl;
        }
    else
        cout<<"Mozesz wybrac tylko 1 lub 2 \n";
}*/

int main()
{
    //float x,y;
    cout<<"Kalkulator oparty na funkcji switch\n";
    liczby();
        cout<<"Wybierz opcje od 1 do 8\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie calkowite\n 5. Pierwiastek\n";
        cout<<" 6. Kwadrat\n 7. Dzielenie z reszta\n 8. \n 9. Koniec\n 0. Pokaz ta liste\n";
    while(true)
    {
        char wybor;
        cout<<"Wybierz ktoras z opcji z listy: ";
        cin>>wybor;
        switch(wybor){
        case '0':
            menu();
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
            break;
            }
            else
                cout<<"Nie mozna dzielic przez zero !\n Wpisz liczby jeszcze raz\n";
                liczby();
        case '5':
            cout<<"Wybrales pierwiastkowanie\n Ktora liczbe chcesz zpierwiastkowac: ";
            int wybor2;
            double pierwiastek;
            cin>>wybor2;
                if (wybor2==1)
                {
                    pierwiastek= sqrt (x);
                    cout<<"Pierwiastek z pierwszej liczby to: "<<pierwiastek<<endl;
                }
                else if (wybor2==2)
                {
                    pierwiastek= sqrt (y);
                    cout<<"Pierwiastek z drugiej liczby to: "<<pierwiastek<<endl;
                }
                else
                    cout<<"Mozesz wybrac tylko 1 lub 2 \n";
            break;
        case '9':
            exit(0);
        default:
            cout<<"Nie ma takiej opcji\n";
        }
    }
    return 0;
}
