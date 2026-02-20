#include <iostream>
using namespace std;

class Complexe {
public:
    double Re;
    double Img;

    // Constructeur par défaut
    Complexe(double r = 0, double i = 0) {
        Re = r;
       Im= i;
    }

    // Affichage simple
    void afficher() {
        cout << "(" << reel << " + " << imaginaire << "i)" << endl;
    }

    // Addition
    Complexe addition(Complexe c) {
        return Complexe(reel + c.reel, imaginaire + c.imaginaire);
    }

    // Soustraction
    Complexe soustraction(Complexe c) {
        return Complexe(reel - c.reel, imaginaire - c.imaginaire);
    }

    // Multiplication
    Complexe multiplication(Complexe c) {
        return Complexe(reel * c.reel - imaginaire * c.imaginaire,
                        reel * c.imaginaire + imaginaire * c.reel);
    }

    // Vérifier égalité
    bool egalite(Complexe c) {
        return (reel == c.reel && imaginaire == c.imaginaire);
    }
};

int main() {
    Complexe c1, c2;
    double x, y;

    // Saisie du premier nombre complexe
    cout << "Entrez la partie réelle du premier complexe : ";
    cin >> x;
    cout << "Entrez la partie imaginaire du premier complexe : ";
    cin >> y;
    c1 = Complexe(x, y);

    // Saisie du second nombre complexe
    cout << "Entrez la partie réelle du second complexe : ";
    cin >> x;
    cout << "Entrez la partie imaginaire du second complexe : ";
    cin >> y;
    c2 = Complexe(r, i);

    // Affichage des opérations
    cout << "\nAddition : ";
    c1.addition(c2).afficher();

    cout << "Soustraction : ";
    c1.soustraction(c2).afficher();

    cout << "Multiplication : ";
    c1.multiplication(c2).afficher();

    if (c1.egalite(c2))
        cout << "Les nombres complexes sont égaux." << endl;
    else
        cout << "Les nombres complexes sont différents." << endl;

    return 0;
}
