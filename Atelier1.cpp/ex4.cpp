  /* ===========================================
    Exercice 4: Incréments et affectations composées
     =========================================== */
#include<iostream>
 using namespace std;

int main() { 
    
    int i, j, n;

// --- A ---
i = 0;
n = i++;   // post-incrément : n prend l’ancienne valeur de i (0), puis i devient 1
cout << "A : i = " << i << "  n = " << n << '\n';

// --- B ---
i = 10;
n = ++i;   // pré-incrément : i devient 11 avant d’être affecté à n
cout << "B : i = " << i << "  n = " << n << "\n";

// --- C ---
i = 20;
j = 5;
n = i++ * ++j;
/*
   Évaluation :
   ++j -> j devient 6
   i++ -> utilise 20 dans l’expression puis i devient 21
   n = 20 * 6 = 120
*/
cout << "C : i = " << i << "  j = " << j << "  n = " << n << "\n";

// --- D ---
i = 15;
n = i += 3; // i = i + 3 -> i devient 18, n reçoit aussi 18
cout << "D : i = " << i << "  n = " << n << "\n";

// --- E ---
i = 3;
j = 5;
n = i *= --j;
/*
   --j -> j devient 4
   i *= 4 -> i = i * 4 = 12
   n reçoit 12
*/
cout << "E : i = " << i << "  j = " << j << "  n = " << n << "\n";

return 0;
}