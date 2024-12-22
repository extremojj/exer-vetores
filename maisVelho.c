/*   Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.  */

#include <stdio.h>

int main()
{

    int n, i;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];

    for (i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    int maisVelha = 0;
    int posMaior = 0;
    for (i = 0; i < n; i++)
    {
        if (idade[i] > maisVelha)
        {
            maisVelha = idade[i];
            posMaior = i;
        }
    }
    printf("\nPosicao do Vetor: %d\n", posMaior);
    printf("PESSOA MAIS VELHA: %s", nome[posMaior]);

    return 0;
}