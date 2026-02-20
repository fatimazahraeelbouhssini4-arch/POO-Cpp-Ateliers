#include < iostream>

 using namespace std;
 
 class Tableau{
    private:
      int *T;
      int taille;
    public:
      //con structeur
      Tableau(int n){
        taille=n;
        T= new int[taille];
      }

    void Remplir() {
        cout << "Entrez la taille de votre tableau : " << taille <<endl;
        for (int i = 0; i < taille; i++) {
            cout<< " Saisir la valeur "<< i+1 << " : ";
            cin >> tab[i];
        }
    }
    //calculer les carres et retourne un nouveau tableau
    Tableau* tabcarre(){        //créer un nouveau tableau contenant les carrés des nombres du tableau actuel.
        Tableau* carre= new Tableau(Taille); //ew Tableau(taille) crée dynamiquement un nouveau tableau de la même taille que le tableau original.
        for(int i=0 ; i < taille ; i++){
            carre -> tab[i]*tab[i];
         
        }
            return carre;
    }

    void afficher(){
        for(int i = 0 ; i<taille ; i++){
            cout<<  "les valeurs sont : " << tab[i] ;
        }
         cout << endl ;
    }
   ~Tableau() {
    delete[] tab; // libération de la mémoire
}
 };
  int main(){
    int n;
    cout<<"entrer la taille de tableau : " ;
    cin>> n;
    Tableau* T1 = new Tableau(n);
    T1->Remplir();

    Tableau* T2 = T1->tabcarre();

    delete T1 ;

    cout<<" Les carres des nombres sont : ";
    T2->afficher();

    delete T2;

    return 0;
  }
     
    
         
 
