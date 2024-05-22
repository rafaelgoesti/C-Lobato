#include <stdio.h>
void main(){
    printf("<<< ALUNO >>>\n");
    printf("-------------\n");
    char nome[30];
    float nota1, nota2;
    printf("Nome do aluno: ");
    gets(nome);

    printf("Nota1: ");
    scanf("%f", &nota1);

    printf("Nota2: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("O aluno %s tirou notas %.1f e %.1f e ficou com media %.1f\n",nome, nota1, nota2, media);
}
