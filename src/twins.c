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

int twins_between_values(int a, int b) {
    int contador = 0;  // armazena quantos números primos estão entre a e b
    // percorre todos os números entre a e b
    for(int i = a; i <= b - 2; i++) {
        // tem que chegar se o número atual é primo, e se o número atual + 2 também é primo;
        // se sim, adiciona +1 no contador de números primos no intervalo
        if(is_prime(i) && is_prime(i + 2)) {
            contador = contador + 1;
        }
    }
    return contador;
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