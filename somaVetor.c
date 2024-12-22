/*Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor*/

#include <stdio.h>

int main() {

int n, i;

printf("Quantos numeros vai digitar? ");
scanf("%d", &n);

float num[n];
for(i=0; i<n; i++) {
    printf("Digite um numero: ");
    scanf("%f", &num[i]);
}

printf("\nValores: ");

for(i=0; i<n; i++){
    printf("%.2f  ", num[i]);
}

float soma = 0;
float cont = 0;
for (i=0; i<n; i++){
    soma = soma + num[i];
    cont = cont + 1;
}
float media = soma / cont;

printf("\nSoma: %.2f", soma);
printf("\nMedia: %.2f", media);






    return 0;
}