/* Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado. */

#include <stdio.h>

int main(){

int n, i;

printf("Quantos valores vai ter cada vetor? ");
scanf("%d", &n);

double a[n];
double b[n];
double c[n];

printf("Digite o valores do vetor A: \n");
for(i=0; i<n; i++){    
    scanf("%lf", &a[i]);
}

printf("Digite o valores do vetor B: \n");
for(i=0; i<n; i++){   
    scanf("%lf", &b[i]);
}

for(i=0; i<n; i++){
    c[i] = a[i] + b[i];
}

printf("\nSOMA DOS VETORES A e B: \n");
for(i=0; i<n; i++){
    printf("%.2lf\n", c[i]);
}

    return 0;
}