#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 0;
        kilometrage = 0.0;
        vitesse = 0.0;
    }

    Voiture(string m, string mod, int a, float km, float v) {
        marque = m;
        modele = mod;
        annee = a;
        kilometrage = km;
        vitesse = v;
    }

    void accelerer(float valeur) {
        vitesse += valeur;
        cout << "La voiture accélère de " << valeur << " km/h." << endl;
    }

    void freiner(float valeur) {
        if (vitesse - valeur < 0)
            vitesse = 0;
        else
            vitesse -= valeur;
        cout << "La voiture freine de " << valeur << " km/h." << endl;
    }

    void afficherInfo() {
        cout << "-----------------------------" << endl;
        cout << "Marque : " << marque << endl;
        cout << "Modèle : " << modele << endl;
        cout << "Année : " << annee << endl;
        cout << "Kilométrage : " << kilometrage << " km" << endl;
        cout << "Vitesse actuelle : " << vitesse <
    }
};

 int main() {
    Voiture v1("Toyota", "Corolla", 2020, 45000, 0);

    v1.afficherInfo();

    v1.accelerer(70);
    v1.afficherInfo();

    v1.avancer(110);
    v1.afficherInfo();


    v1.freiner(40);
    v1.afficherInfo();

    return 0; // Le destructeur sera appelé automatiquement ici
}