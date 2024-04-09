#include <stdio.h>

int main(){
    int vet[6];

    printf("Digite 6 numeros inteiros: \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }

    printf("Array: \n");
    for(int i = 0; i < 6; i++){
        printf("%d ", vet[i]);
    }

    //ordenando o vetor
    int temp;
    for(int i = 0; i < 6-1; i++){
        for(int j = 0; j < 6-i-1; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }

    printf("\nArray ordenado: \n");
    for(int i = 0; i < 6; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}