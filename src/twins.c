#include <stdbool.h>
#include <stdio.h>
#define N_PRIMES 10

bool is_prime(int number) {
    return (bool)NULL;
}

int twins_between_values(int a, int b) {
    return (int)NULL;
}

/**
 * Essa função main é o seu testador. Não modifique ela!
 */
int main() {
    int answer = twins_between_values(2, 100);
    bool failure = answer != 8;

    if(!failure) {
        printf(">>> Correto! <<< \n");
    } else {
        printf(">>> Incorreto! <<< \n");
    }
    printf("Existem 8 pares de numeros primos entre 2 e 100, mas voce achou so %d\n", answer);
    printf("Os pares sao:\n");
    printf("(3, 5) | (5, 7) | (11, 13) | (17, 19) | (29, 31) | (41, 43) | (59, 61) | (71, 73)\n");

    return failure;
}