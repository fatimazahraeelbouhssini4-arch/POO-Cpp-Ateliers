/*============================================= Exercice 2 : Types et valeurs des expressions ============================================ */

#include <stdio.h>

int main() { 
    
    char c = '\x05'; // c = 5 (en décimal)
   int n = 5; long p = 1000; float x = 1.25; double z = 5.5;



/* Expression 1 */
long expr1 = n + c + p;          // Type : long, Valeur : 1010

/* Expression 2 */
float expr2 = 2 * x + c;         // Type : float, Valeur : 7.5

/* Expression 3 */
int expr3 = (char)n + c;         // Type : int, Valeur : 10

/* Expression 4 */
float expr4 = (float)z + n / 2;  // Type : float, Valeur : 7.5

/* Affichage des résultats */
printf("Expression 1 : n + c + p = %ld (type long)\n", expr1);
printf("Expression 2 : 2*x + c = %.2f (type float)\n", expr2);
printf("Expression 3 : (char)n + c = %d (type int)\n", expr3);
printf("Expression 4 : (float)z + n/2 = %.2f (type float)\n", expr4);

return 0;
}
