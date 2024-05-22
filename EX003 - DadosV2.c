#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome1[30];
    char nome2[30];
    char nome3[30];
    char sexo1;
    char sexo2;
    char sexo3;
    float nota1;
    float nota2;
    float nota3;
    printf("Cadastrando a Primeira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome1);
    printf("SEXO: ");
    fflush(stdin);
    scanf("%c", &sexo1);
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("Cadastrando a Segunda pessoa:\n");
    printf("\n---------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO: ");
    fflush(stdin);
    scanf("%c", &sexo2);
    printf("NOTA: ");
    scanf("%f",&nota2);

    printf("Cadastrando a Terceira pessoa:\n");
    printf("\n----------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO: ");
    fflush(stdin);
    scanf("%c",&sexo3);
    printf("NOTA: ");
    scanf("%f",&nota3);

    printf("\nLISTAGEM COMPLETA");
    printf("\n-----------------------------\n");
    printf("NOME \t\tSEXO \tNOTA");
    printf("\n%-10s \t%c \t%.1f", nome1, sexo1, nota1);
    printf("\n%-10s \t%c \t%.1f", nome2, sexo2, nota2);
    printf("\n%-10s \t%c \t%.1f", nome3, sexo3, nota3);
    printf("\n-----------------------------");
}
