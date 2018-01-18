#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstdlib>


using namespace std;

int main()
{

string login_klawiatura, haslo_klawiatura;
string login[3], haslo[3];

string imie[3], nazwisko[3], email[3], leader_follower[3], sam_para[3], instruktor[3], poziom[3];
string nr_tel[3];

// powitanie

cout << "\n";
cout << "Witamy w aplikacji do zarzadzania zapisani na eventy!";

cout << "\n\n";

cout << "Jesli jestes naszym Uzytkownikiem wpisz [1] aby sie zalogowac,\njesli nie - wpisz [2] i zarejestruj sie:";
cout << "\n\n";

int logowanie_rejestracja;

cin >> logowanie_rejestracja;

// wybor rejestracja lub logowanie

if (logowanie_rejestracja==1)

{
    {
    fstream uzytkownicy_baza;
    uzytkownicy_baza.open("uzytkownicy.txt", ios::in);

    if (uzytkownicy_baza.good()==false)
        {
           cout << "Baza danych uzytkownikow nie zostala odnaleziona!\nSprawdz lokalizacje pliku bazy danych uzytkownicy.txt";
           exit(0);
        }


    // wpisanie loginu i hasla na klawiaturze

    cout << "Login: "; cin >> login_klawiatura;
    cout << "Haslo: "; cin >> haslo_klawiatura;

    // koniec wpisywania, teraz weryfikacja




    // wprowadzic funkcje do przeszukiwania pliku bazy danych po loginie i weryfikacji loginu z haslem

    // wprowadzic funkcje juz zajetego loginu, jezeli istnieje, to wprowadz inny - petla if









    }


    if ((login==login_klawiatura)&&(haslo==haslo_klawiatura))
    {
        cout << "Logowanie pomyslne!";

    uzytkownicy_baza.close();
    uzytkownicy_baza.clear();
    }
    else
    {
        cout << "\n";
        cout << "Logowanie nieudane. Sprobuj ponownie.";
    }
        }



  }

  else
    {
    cout << "\n";
    cout << "Podaj login: ";        cin >> login;
    cout << "Podaj haslo: ";        cin >> haslo;
    cout << "Podaj imie: ";         cin >> imie;
    cout << "Podaj nazwisko: ";     cin >> nazwisko;
    cout << "Podaj email: ";        cin >> email;
    cout << "Podaj nr telefonu: ";  cin.ignore(); getline(cin,nr_tel);

    fstream uzytkownicy_baza;
    uzytkownicy_baza.open("uzytkownicy.txt", ios::out | ios::app);

    uzytkownicy_baza << login << endl;
    uzytkownicy_baza << haslo << endl;
    uzytkownicy_baza << imie << endl;
    uzytkownicy_baza << nazwisko << endl;
    uzytkownicy_baza << email << endl;
    uzytkownicy_baza << nr_tel << endl;

    Sleep(2000);
    cout << "Rejestracja pomyslna. Mozesz sie juz zalogowac!";

    uzytkownicy_baza.close();
    uzytkownicy_baza.clear();
    }










return 0;
}
