  /* ===========================================
           Exercice 3 : Comparaisons et expressions
           =========================================== */
#include <stdio.h>

int main() {
    
    int n = 5, p = 9; int q; float x;

/* Expression 1 */
q = n < p;                     // q = 1 (vrai)
printf("1) q = n < p -> q = %d\n", q);

/* Expression 2 */
q = n == p;                    // q = 0 (faux)
printf("2) q = n == p -> q = %d\n", q);

/* Expression 3 */
q = p % n + p > n;             // 9 % 5 = 4 -> 4 + 9 = 13 -> 13 > 5 -> vrai -> 1
printf("3) q = p %% n + p > n -> q = %d\n", q);

/* Expression 4 */
x = p / n;                     // 9 / 5 = 1 (division entière) -> x = 1.0
printf("4) x = p / n -> x = %.1f\n", x);

/* Expression 5 */
x = (float) p / n;             // 9.0 / 5 = 1.8
printf("5) x = (float)p / n -> x = %.1f\n", x);

/* Expression 6 */
x = (p + 0.5) / n;             // 9.5 / 5 = 1.9
printf("6) x = (p + 0.5) / n -> x = %.1f\n", x);

/* Expression 7 */
x = (int)(p + 0.5) / n;        // (int)9.5 = 9 -> 9 / 5 = 1 -> x = 1.0
printf("7) x = (int)(p + 0.5) / n -> x = %.1f\n", x);

/* Expression 8 */
q = n * (p > n ? n : p);       // condition vraie -> n * n = 25
printf("8) q = n * (p > n ? n : p) -> q = %d\n", q);

/* Expression 9 */
q = n * (p < n ? n : p);       // condition fausse -> n * p = 45
printf("9) q = n * (p < n ? n : p) -> q = %d\n", q);

return 0;