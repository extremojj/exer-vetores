/*   Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.  */

#include <stdio.h>

int main() {

int n, i;
double media;

printf("Quanto elementos tera o vetor? ");
scanf("%d", &n);

double vet[n];

for(i=0; i<n; i++){
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
}

double somaVet = 0;
int cont = 0;
for(i=0; i<n; i++){
    somaVet = somaVet + vet[i];
    cont = cont + 1;
}

media = somaVet / n;

printf("\nMEDIA DE VETOR: %.3lf\n", media);
printf("ELEMENTOS ABAIXO DA MEDIA: \n");

for(i=0; i<n; i++){
    if(vet[i] < media){
        printf("%.2lf\n", vet[i]);
    }
}

    return 0;
}