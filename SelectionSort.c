#include <stdio.h>

int main(){
    int n = 5;
    int vet[n];

    printf("Digite numeros inteiros: \n");
    for(int i = 0; i < n; i++){
        scanf(" %d", &vet[i]);
    }

    //mostrando o vetor
    printf("\nArray: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }

    //ordenando o vetor
    for(int i = 0; i < n-1; i++){
        int menor = i, temp;
        for(int j = i+1; j < n; j++){
            if(vet[menor] > vet[j]){
                menor = j;
                int temp = vet[i];
                vet[i] = vet[menor];
                vet[j] = temp;
            }
        }
    }

    printf("\nVetor ordenado: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}