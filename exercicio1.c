/*Considerando o Sistema Triangular Superior abaixo, implemente o algoritmo apresentado na aula
para solucioná-lo.
Crie e utilize um procedimento para calcular e imprimir a solução do Sistema.
Devem ser criados uma matriz para armazenar U e dois vetores: um para armazenar os valores de x e
outro para os valores de b.
Obs. 1: Todas as matrizes e vetores utilizados devem ser declarados na função main;
Obs. 2: Seu algoritmo pode ser testado com qualquer outro Sistema Triangular Superior.
MAT{ 3 1 0
     0 2 -1
     0 0 3}
VET{ 4 2 0}
*/

//Aluno: Felipe Muros

#include <stdio.h>
#include <stdlib.h>

#define N 3

void calulaImprime(int M[N][N], int b[N], int x[N])
{
    int soma;
    for (int i = 0; i < N; i++)
    {
        soma = 0;
        for (int j = i + 1; j < N; j++)
        {
            soma = soma + M[i][j] * x[j];
        }
        x[i] = (b[i] - soma) / M[i][i];
    }
    printf("Solucao do sistema: \n");
    for (int i = 0; i < N; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
}

int main()
{
    int M[N][N] = {{3, 1, 0}, {0, 2, -1}, {0, 0, 3}};
    int b[N] = {4, 2, 0};
    int x[N];
    calulaImprime(M, b, x);
    return 0;
}