#include <assert.h>
#include "fatorial.c"
#include <stdio.h>

int main(){
    
    int resultado; 
    
    resultado = fatorial(5);

    assert(resultado == 120);
    printf("teste executado com sucesso");
    
    return 0;
}