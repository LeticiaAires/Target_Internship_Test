#include <stdio.h>

int main() {
    
    int INDICE = 12;  
    int SOMA = 0;     
    int K = 1;        
    
    // The loop runs in O(n) time complexity, where n is the value of INDICE.
    while (K < INDICE) {
        K = K + 1;       
        SOMA = SOMA + K;  
    }

    // RESPOSTA: Ao final do processamento, a variável SOMA terá valor 78
    printf("The final sum (SOMA) is: %d\n", SOMA);

    return 0;
}
