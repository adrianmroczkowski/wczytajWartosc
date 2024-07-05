/*Napisz funkcjê, która bêdzie wczytywa³a liczby ze standardowego wejœcia i zwraca³a wczytan¹ wartoœæ.
Funkcja ma zagwarantowaæ, ¿e zwracana liczba zawsze jest poprawna.
Oznacza to, ¿e funkcja bêdzie musia³a pytaæ u¿ytkownika o wprowadzenie liczby dopóki nie poda poprawnej*/

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

        //Sprawdzanie, czy podano poprawn¹ liczbe
        if (cin.fail()) {
            cin.clear(); // czyszczenie flagi b³êdów
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // usuwanie zbêdnych danych z buffora
            cout << "Blad, wprowadzona liczba jest niepoprawna. Sprobuj ponownie." << endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // usuwanie zbêdnych danych z buffora
            break; // Zakañcza pêtlê, jeœli wprowadzono poprawn¹ liczbê
        }
    }
    return liczba;
}

int main()
{
    int wynik = wczytajLiczbe();
    cout << "Wczytana liczba to: " << wynik << endl;
}
 