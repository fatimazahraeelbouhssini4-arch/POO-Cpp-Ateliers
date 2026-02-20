#include <stdio.h>

int main() {
     char c = '\x01';
     int p = 10 ;  // c = 1 (en hexadécimal) 
/* Expression 1 */
int expr1 = p + 3;            // Type : int, Valeur : 13

/* Expression 2 */
int expr2 = c + 1;            // Type : int, Valeur : 2

/* Expression 3 */
int expr3 = p + c;            // Type : int, Valeur : 11

/* Expression 4 */
int expr4 = 3 * p + 5 * c;    // Type : int, Valeur : 35

/* Affichage des résultats */
printf("Expression 1 : p + 3 = %d (type int)\n", expr1);
printf("Expression 2 : c + 1 = %d (type int)\n", expr2);
printf("Expression 3 : p + c = %d (type int)\n", expr3);
printf("Expression 4 : 3*p + 5*c = %d (type int)\n", expr4);

return 0;
}