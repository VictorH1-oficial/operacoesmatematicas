int dividir( int dividendo,int divisor) 
  
    int quociente = 0;


    int sinalQuociente = 1;
    if ((dividendo < 0 && divisor > 0) || (dividendo > 0 && divisor < 0)) {
        sinalQuociente = -1;
    }

    int a = dividendo < 0 ? -dividendo : dividendo;
    int b = divisor < 0 ? -divisor : divisor;

    while (a >= b) {
        a -= b;
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

    resto = a;
return resultado;
}
