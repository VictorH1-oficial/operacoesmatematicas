#include <assert.h>

#include "multiplicar.c"
#include "dividir.c"

int main() {
    // Testes multiplicação
    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(-4, 5) == -20);

    // Testes divisão
    assert(dividir(10, 2) == 5);
    assert(dividir(-9, 3) == -3);

    return 0;
}
