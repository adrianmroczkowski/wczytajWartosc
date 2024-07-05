/*Napisz funkcj�, kt�ra b�dzie wczytywa�a liczby ze standardowego wej�cia i zwraca�a wczytan� warto��.
Funkcja ma zagwarantowa�, �e zwracana liczba zawsze jest poprawna.
Oznacza to, �e funkcja b�dzie musia�a pyta� u�ytkownika o wprowadzenie liczby dop�ki nie poda poprawnej*/

#include <iostream>
#include <limits>

using namespace std;

int wczytajLiczbe()
{
    int liczba;

    // wczytywanie liczby
    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        //Sprawdzanie, czy podano poprawn� liczbe
        if (cin.fail()) {
            cin.clear(); // czyszczenie flagi b��d�w
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // usuwanie zb�dnych danych z buffora
            cout << "Blad, wprowadzona liczba jest niepoprawna. Sprobuj ponownie." << endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // usuwanie zb�dnych danych z buffora
            break; // Zaka�cza p�tl�, je�li wprowadzono poprawn� liczb�
        }
    }
    return liczba;
}

int main()
{
    int wynik = wczytajLiczbe();
    cout << "Wczytana liczba to: " << wynik << endl;
}
 