#include <stdio.h>

int multiplicar(numero1,numero2)
{
    int contador1,contador2,produto;

    contador1 = 0;
    contador2 = 0;
    produto = 0;

    while (contador1 < numero1){
        contador2 = 0;
        while (contador2 < numero2){
            produto++; // produto = produto + 1;
            contador2++;   
        }
        contador1++;    
    }
   return produto;
}
