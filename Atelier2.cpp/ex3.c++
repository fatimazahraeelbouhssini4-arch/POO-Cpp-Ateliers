#include <iostream>
using namespace std;

class Tableau {
private:
    int T[10];  // tableau de 10 entiers

public:
    void saisir() {
        cout << "Entrez 10 nombres entiers :" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Nombre " << i + 1 << " : ";
            cin >> T[i];
        }
    }

    void afficherMinMax() {
        int min = T[0];
        int max = T[0];

        for (int i = 1; i < 10; i++) {
            if (T[i] < min)
                min = tab[i];
            if (T[i] > max) 
                max = tab[i];
        }

        cout << "Le plus petit nombre est : " << min << endl;
        cout << "Le plus grand nombre est : " << max << endl;
    }
};

int main() {
    Tableau t;
    t.saisir();
    t.afficherMinMax();

    return 0;
}
