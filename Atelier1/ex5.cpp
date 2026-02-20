#include <iostream>
using namespace std;

// Remplir le tableau 
void remplir(int Arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Entrez l'élément " << i + 1 << " : ";
        cin >> Arr[i];
    }
}

// Afficher le tableau 
void afficher(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

// Trouver l'indice du maximum
int trouverMaxIndex(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Inverser le tableau
void inverser(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int arr[100]; // tableau statique de taille max 100

    if (n > 100) {
        cout << "Taille trop grande, maximum 100 !" << endl;
        return 0;
    }

    remplir(arr, n);

    cout << "\nTableau original : ";
    afficher(arr, n);

    // Trouver et modifier le maximum
    int maxIndex = trouverMaxIndex(arr, n);
    cout << "Le maximum est : " << arr[maxIndex] << endl;
    cout << "Entrez une nouvelle valeur pour le maximum : ";
    cin >> arr[maxIndex];

    cout << "\nTableau après modification du maximum : ";
    afficher(arr, n);

    // Inverser le tableau
    inverser(arr, n);
    cout << "Tableau après inversion : ";
    afficher(arr, n);

    return 0;
}