/*   Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).   */

#include <stdio.h>

int main()
{

    int n, i;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nome[n][50];
    double nota1[n];
    double nota2[n];

    for (i = 0; i < n; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno: \n", i + 1);
        scanf("%s", nome[i]);
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);
    }

    printf("\nAlunos Aprovados: \n");

    for (i = 0; i < n; i++){
        media = (nota1[i] + nota2[i]) / 2;
        if (media >= 6.0){
            printf("%s\n", nome[i]);
        }
    }

    printf("\nAlunos Reprovados: \n");

    for(i=0; i<n; i++){
        media = (nota1[i] + nota2[i]) / 2;
        if(media < 6.0){
            printf("%s", nome[i]);
        }
    }

    return 0;
}