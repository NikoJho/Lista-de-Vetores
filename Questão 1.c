#include <stdio.h>

int main()
{
    int main(){
    int vetor[10], i, maior;
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("Maior número é: %d\n", maior);
    return 0;
}

