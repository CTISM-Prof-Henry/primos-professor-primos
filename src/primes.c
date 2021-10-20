#include <stdbool.h>
#include <stdio.h>
#define N_PRIMES 10

bool is_prime(int number) {
    // tem que percorrer de 2 até n/2
    // tem que percorrer 2 até number/2, e descartar a parte fracionária de n/2
    int comeco = 2;
    int fim = number / 2;
    for(int i = comeco; i <= fim; i++) {
        // se o resto da divisão inteira de number por i for zero
        if((number % i) == 0) {
            return false;  // não, não é primo; retorna false
        }
    }
    // se ele chegar nessa instrução, quer dizer que o laço não foi interrompido;
    // logo, é primo
    return true;
}

/**
 * Essa função main é o seu testador. Não modifique ela!
 */
int main() {
    int some_primes[N_PRIMES] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    bool failure = false;
    for(int i = 0; i < N_PRIMES; i++) {
        if(!is_prime(some_primes[i])) {
            printf("Incorreto: %d\n", some_primes[i]);
            failure = true;
        } else {
            printf("  Correto: %d\n", some_primes[i]);
        }
    }

    return failure;
}