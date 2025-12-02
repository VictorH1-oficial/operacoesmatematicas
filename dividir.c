int dividir( int dividendo,int divisor) {
  
    int quociente = 0,resto;


    int sinalQuociente = 1;
    if ((dividendo < 0 && divisor > 0) || (dividendo > 0 && divisor < 0)) {
        sinalQuociente = -1;
    }

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    int resultado = 0;
    int i = 0;
    if (sinalQuociente == -1) {
        while (i < quociente) {
            resultado--;
            i++;
        }
    } else {
        while (i < quociente) {
            resultado++;
            i++;
        }
    }

    resto = dividendo;
return resultado;
}
