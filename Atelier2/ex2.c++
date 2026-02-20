#include <iostream>
using namespace std;

// Fonction qui vérifie si un nombre est multiple de 2
int Multipliepar2(int n) {
    if (n % 2 == 0)
        return 1; // vrai
    else
        return 0; // faux
}

// Fonction qui vérifie si un nombre est multiple de 3
int Multipliepar3(int n) {
    if (n % 3 == 0)
        return 1; // vrai
    else
        return 0; // faux
}

int main() {
    int Nbr;

    cout << "Donnez un entier : ";
    cin >> Nbr;

    // Vérification si le nombre est pair
    if (Multipliepar2(Nbr))
        cout << "Il est pair" << endl;

    // Vérification si le nombre est multiple de 3
    if (Multipliepar3(Nbr))
        cout << "Il est multiple de 3" << endl;

    // Vérification si le nombre est divisible par 6
    if (estMultipleDe2(Nbr) && Multipliepar3(Nbr))
        cout << "Il est divisible par 6" << endl;

    return 0;
}
