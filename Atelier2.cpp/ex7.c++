#include <iostream>
#include <string>
using namespace std;

// Classe qui gère les permutations
class Permutation {
private:
    string Ch; // la chaîne à permuter

    void generer(int debut, int fin) {
        if (debut == fin) {
            cout << mot << endl; // afficher une permutation complète
        } else {
            for (int i = debut; i <= fin; i++) {
                // Échanger les caractères
                char temp = Ch[debut];
                Ch[debut] = Ch[i];
                Ch[i] = temp;

                generer(debut + 1, fin);

                // Remettre les caractères comme avant (backtracking)
                temp = mot[debut];
                mot[debut] = mot[i];
                mot[i] = temp;
            }
        }
    }

public:
    // Constructeur : initialise la chaîne
    Permutation(string c) {
        Ch = c;
    }

    // Fonction publique pour lancer le processus
    void afficher() {
        if (Ch.empty()) {
            cout << "Chaîne vide, aucune permutation possible." << endl;
        } else {
            cout << "Les permutations de \"" << mot << "\" sont :" << endl;
            generer(0, Ch.size() - 1);
        }
    }
};

int main() {
    string Ch;
    cout << "Entrez une chaîne de caractères : ";
    cin >> Ch;

    Permutation p(Ch);   // création d’un objet de la classe
    p.afficher();         // appel de la méthode pour afficher les permutations

    return 0;
}
