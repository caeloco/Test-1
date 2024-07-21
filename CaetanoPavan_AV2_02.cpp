#include <stdio.h>
#include <stdlib.h>

//Nome: Caetano Cesar Pavan
//RA: 2608880
//Email: caetanopavan@alunos.utfpr.edu.br
//IDE: VISUAL STUDIO CODE

#define tamanho 4

void imprimirmat(int matriz[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matA(int matriz[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == i || j == tamanho - i - 1)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    imprimirmat(matriz);
}

void matB(int matriz[tamanho][tamanho])
{
    int aux = 1;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == 0 && i == 0)
            {
                matriz[i][j] = 0;
            }
            else if (j == 1 && i == 0)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = matriz[i][j - 1] + aux + 2;
                aux += 2;
            }
        }
    }

    imprimirmat(matriz);
}

void matC(int matriz[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == i)
            {
                matriz[i][j] = 0;
            }
            else if (j > i)
            {
                matriz[i][j] = 5;
            }
            else if (j < i)
            {
                matriz[i][j] = 9;
            }
        }
    }

    imprimirmat(matriz);
}

void matD(int matriz[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == 0)
            {
                matriz[i][j] = 1;
            }
            else if (j == 1)
            {
                matriz[i][j] = 6;
            }
            else if (j == 2)
            {
                matriz[i][j] = 11;
            }
            else if (j == 3)
            {
                matriz[i][j] = 16;
            }
        }
    }

    imprimirmat(matriz);
}

void matE(int matriz[tamanho][tamanho])
{
    int aux = 1;
    for (int j = 0; j < tamanho; j++)
    {
        for (int i = 0; i < tamanho; i++)
        {
            if (i == 0 && j == 0)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = aux * 2;
                aux *= 2;
            }
            
        }
    }

    imprimirmat(matriz);
}

int main()
{
    int matriz[tamanho][tamanho];

    printf("Matriz A: \n");
    matA(matriz);

    printf("Matriz B: \n");
    matB(matriz);

    printf("Matriz C: \n");
    matC(matriz);

    printf("Matriz D: \n");
    matD(matriz);

    printf("Matriz E: \n");
    matE(matriz);
    return 0;
}