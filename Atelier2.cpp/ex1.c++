#include <iostream>

using namespace std;

// On crée une classe pour gérer le comptage des appels
class CompteurAppel {
private:
    static int compteur; // variable partagée entre tous les objets

public:
    // Fonction qui affiche le nombre d'appels
    void afficherAppel() {
        compteur++; // on incrémente à chaque appel
        cout << "Appel numéro " << compteur << endl;
    }
};

// Initialisation du compteur à 0
int CompteurAppel::compteur = 0;

int main() {
    CompteurAppel c;

    // On appelle plusieurs fois la fonction
    c.afficherAppel();
    c.afficherAppel();
    c.afficherAppel();

    return 0;
}
