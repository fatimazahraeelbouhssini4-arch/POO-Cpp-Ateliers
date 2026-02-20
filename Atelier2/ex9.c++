#include <iostream>
#include <cmath>   // pour sqrt
using namespace std;

// ---------------------------
// Classe Vecteur3D
// ---------------------------
class Vecteur3D {
private:
    float x, y, z; // les trois composantes du vecteur

public:
    Vecteur3D(float a = 0, float b = 0, float c = 0) {
        x = a;
        y = b;
        z = c;
    }

    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D somme(Vecteur3D v) {
        Vecteur3D res;
        res.x = x + v.x;
        res.y = y + v.y;
        res.z = z + v.z;
        return res;  // retourne un nouvel objet
    }

    float produitScalaire(Vecteur3D v) {
        return (x * v.x + y * v.y + z * v.z);
    }

    bool coincide(Vecteur3D v) {
        return (x == v.x && y == v.y && z == v.z);
    }

    float norme() {
        return sqrt(x * x + y * y + z * z);
    }

    //  retourne le vecteur qui a la plus grande norme (par valeur)
    Vecteur3D normax(Vecteur3D v) {
        if (this->norme() >= v.norme())
            return *this;
        else
            return v;
    }

    Vecteur3D* normaxAdresse(Vecteur3D* v) {
        if (this->norme() >= v->norme())
            return this;
        else
            return v;
    }

    Vecteur3D& normaxReference(Vecteur3D& v) {
        if (this->norme() >= v.norme())
            return *this;
        else
            return v;
    }
};

// ---------------------------
// Fonction principale main()
// ---------------------------
int main() {
    Vecteur3D v1(1, 2, 3);
    Vecteur3D v2(4, 5, 6);

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    // Somme
    cout << "\nSomme des deux vecteurs : ";
    Vecteur3D v3 = v1.somme(v2);
    v3.afficher();

    // Produit scalaire
    cout << "\nProduit scalaire = " << v1.produitScalaire(v2) << endl;

    // Coïncidence
    if (v1.coincide(v2))
        cout << "Les vecteurs sont identiques." << endl;
    else
        cout << "Les vecteurs sont différents." << endl;

    // Norme
    cout << "Norme de v1 = " << v1.norme() << endl;
    cout << "Norme de v2 = " << v2.norme() << endl;

    // Normax (par valeur)
    cout << "\nLe vecteur de plus grande norme (par valeur) : ";
    Vecteur3D v4 = v1.normax(v2);
    v4.afficher();

    // Normax (par adresse)
    cout << "Le vecteur de plus grande norme (par adresse) : ";
    Vecteur3D* v5 = v1.normaxAdresse(&v2);
    v5->afficher();

    // Normax (par référence)
    cout << "Le vecteur de plus grande norme (par référence) : ";
    Vecteur3D& v6 = v1.normaxReference(v2);
    v6.afficher();

    return 0;
}
