#include <stdio.h>
#include <stdlib.h>

//Nome: Caetano Cesar Pavan
//RA: 2608880
//Email: caetanopavan@alunos.utfpr.edu.br
//IDE: VISUAL STUDIO CODE

void imprimirvetor(int vetR[7])// imprimir o vetor
{
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", vetR[i]);
    }
    printf("\n");
}

void zerarvetor(int lista[7])// zerar o vetor
{
    for (int i = 0; i < 7; i++)
    {
        lista[i] = 0;
    }
}

void inserirvetor(int lista[7])// opcao 1
{
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &lista[i]);
    }
}

void multiplicarvetor(int lista1[7], int lista2[7], int lista3[7])// opcao 2
{
    int aux = 6;
    for (int i = 0; i < 7; i++)
    {
        lista3[i] = lista1[i] * lista2[aux];
        aux--;
    }

    imprimirvetor(lista3);
}

void somaEpontenciavetor(int lista1[7], int lista2[7], int lista3[7])// opcao 3
{
    int aux;
    for (int i = 0; i < 7; i++)
    {
        aux = lista1[i] + lista2[i];
        lista3[i] = aux * aux;
    }

    imprimirvetor(lista3);
}

int somatoriavetor(int lista1[7], int lista2[7])// opcao 4
{
    int resultado = 0;
    for (int i = 0; i < 7; i++)
    {
        resultado += lista1[i] + lista2[i];
    }

    return resultado;
}

int main()
{
    int vet1[7], vet2[7], vet3[7];
    int total;
    int opcao;

    zerarvetor(vet1);
    zerarvetor(vet2);

    do
    {
        printf("Escolha uma das opcoes: \n");
        printf("Opcao 1 - Informar valores nos vetores \nOpcao 2 - Multiplicacao especial \nOpcao 3 - Somar e elevar valores ao quadrado \nOpcao 4 - Realizar somatoria \n0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite os valores do vetor 1: ");
            inserirvetor(vet1);

            printf("Digite os valores do vetor 2: ");
            inserirvetor(vet2);
            break;
        case 2:
            printf("Resultado da Multiplicao especial: ");
            multiplicarvetor(vet1, vet2, vet3);
            break;
        case 3:
            printf("Resultado da Soma e Potencia: ");
            somaEpontenciavetor(vet1, vet2, vet3);
            break;
        case 4:
            total = somatoriavetor(vet1, vet2);
            printf("Rsultado da somatoria geral: %d\n", total);
            break;
        case 0:
            printf("Saindo");
            break;
        default:
            printf("Essa nao eh uma opcao valida\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}