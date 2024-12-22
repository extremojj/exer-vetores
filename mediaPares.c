/*   Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"  */

#include <stdio.h>

int main()
{

    int n, i, cont, vetPar;
    double media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    vetPar = 0;
    cont = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vetPar = vetPar + vet[i];
            cont = cont + 1;
        }
    }

    if (vetPar == 0)
    {
        printf("NENHUM NUMERO PAR. ");
    }
    else
    {
        media = vetPar / cont;
        printf("MEDIA DOS PARES: %.1lf", media);
    }

    return 0;
}