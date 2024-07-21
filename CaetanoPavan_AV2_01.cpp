#include <stdio.h>
#include <stdlib.h>

//Nome: Caetano Cesar Pavan
//RA: 2608880
//Email: caetanopavan@alunos.utfpr.edu.br
//IDE: VISUAL STUDIO CODE

void armazenarvetor(int lista[3]) {
    for (int i = 0; i < 3; i++) {
        scanf("%d", &lista[i]);
    }
}

void imprimirvetor(int lista[3]) {
    for (int i = 0; i < 3; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int maiorvetor(int lista1[3], int lista2[3], int lista3[3]) {
    int maior = 0;
    for (int i = 0; i < 3; i++) {
        if (lista1[i] > maior) {
            maior = lista1[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (lista2[i] > maior) {
            maior = lista2[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (lista3[i] > maior) {
            maior = lista3[i];
        }
    }

    return maior;
}

int menorvetor(int lista1[3], int lista2[3], int lista3[3]) {
    int menor = 100000;
    for (int i = 0; i < 3; i++) {
        if (lista1[i] < menor) {
            menor = lista1[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (lista2[i] < menor) {
            menor = lista2[i];
        }
    }
    for (int i = 0; i < 3; i++) {
        if (lista3[i] < menor) {
            menor = lista3[i];
        }
    }

    return menor;
}


int main()
{
    int vet1[3], vet2[3], vet3[3];
    int maiorvalor, menorvalor;

    printf("Digite os valores do vetor 1: ");
    armazenarvetor(vet1);

    printf("Digite os valores do vetor 2: ");
    armazenarvetor(vet2);

    printf("Digite os valores do vetor 3: ");
    armazenarvetor(vet3);

    printf("Valores do vetor 1: ");
    imprimirvetor(vet1);

    printf("Valores do vetor 2: ");
    imprimirvetor(vet2);

    printf("Valores do vetor 3: ");
    imprimirvetor(vet3);

    maiorvalor = maiorvetor(vet1, vet2, vet3);

    menorvalor = menorvetor(vet1, vet2, vet3);

    printf("Maior valor: %d\n", maiorvalor);

    printf("Menor valor: %d", menorvalor);
    
    return 0;
}