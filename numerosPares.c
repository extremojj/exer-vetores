/*Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.*/

#include <stdio.h>

int main()
{

    int n, i;

    printf("Quantos numeros ira digitar? ");
    scanf("%d", &n);

    int num[n];
    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    printf("\nNUMEROS PARES: \n");

    int contPares = 0;
    for (i = 0; i < n; i++) {
        if (num[i] % 2 == 0) {
            printf("%d  ", num[i]);
            contPares = contPares + 1;
        }
    }
    printf("\n\n");
    printf("QUANTIDADE DE PARES: %d\n", contPares);

    return 0;
}