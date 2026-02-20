#include <iostream>
using namespace std;

// Classe qui contient nos fonctions
class Manipulateur {
public:
    void incrementerpointeur(int* x) {
        (*x)++;  // on incrémente la valeur pointée
    }

    void incrementerreference(int& x) {
        x++;  // incrément direct via la référence
    }
    void permuterpointeur(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void permuterreference(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Manipulateur M;

    // Variables pour test
    int x = 7, y = 30;

    cout << "Avant incrementer (pointeur) : x = " << x << endl;
    M.incrementerpointeur(&x);
    cout << "Après incrementer (pointeur) : x = " << x << endl << endl;

    cout << "Avant incrementer (référence) : y = " << y << endl;
    m.incrementer_reference(y);
    cout << "Après incrementer (référence) : y = " << y << endl << endl;

    int a = 2, b = 7;
    cout << "Avant permuter (pointeur) : a = " << a << ", b = " << b << endl;
    m.permuter_pointeur(&a, &b);
    cout << "Après permuter (pointeur) : a = " << a << ", b = " << b << endl << endl;

    int c = 19, d = 29;
    cout << "Avant permuter (référence) : c = " << c << ", d = " << d << endl;
    m.permuter_reference(c, d);
    cout << "Après permuter (référence) : c = " << c << ", d = " << d << endl;

    return 0;
}
