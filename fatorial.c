int fatorial (int numero) {
    
    int fatorial = 1;

    while(numero > 1){
        
        fatorial = fatorial * numero;
        numero--;
    }

    return fatorial;
}