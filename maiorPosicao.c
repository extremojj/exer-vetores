/* Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero). */

#include <stdio.h>

int main()
{

    int n, i, posMaior;
    double maiorValor;

    printf("Quantos numeros sera digitado? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maiorValor = 0;
    posMaior = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] > maiorValor)
        {
            maiorValor = vet[i];
            posMaior = i;
        }
    }
    printf("\n");

    printf("MAIOR VALOR: %.2lf\n", maiorValor);
    printf("POSICAO MAIOR VALOR: %d\n", posMaior);

    return 0;
}