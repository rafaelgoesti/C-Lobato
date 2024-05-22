#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("EX004 - LISTAGEM\n");
    printf("Casdastrando a Primeira pessoa: \n");
    printf("-------------------------------\n");
    // Variáveis da primeira pessoa
    char nome1[30];
    char sexo1;
    float nota1;
    printf("NOME: ");
    gets(nome1);
    printf("SEXO: ");
    scanf("%c", &sexo1);
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("Cadastrando a Segunda pessoa:\n");
    printf("\n-------------------------------\n");

    // Variáveis da segunda pessoa
    char nome2[30];
    char sexo2;
    float nota2;
    printf("NOME: ");
    scanf("%s", &nome2);
    printf("SEXO: ");
    //scanf("%c", &sexo2);
    //scanf("%c", &sexo2);
    sexo2 =  getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("Cadastrando a Terceira pessoa: \n");
    printf("\n-------------------------------\n");

    // Variáveis da terceira pessoa
    char nome3[30];
    char sexo3;
    float nota3;
    printf("NOME: ");
    scanf("%s", &nome3);
    printf("SEXO: ");
    //gets(sexo3);
    scanf("%c", &sexo3);
    printf("NOTA: ");
    scanf("%d", &nota3);

    // Mostar em tabelas
    printf("\nLISTAGEM COMPLETA\n");
    printf("NOME \t SEXO \tNOTA");
    printf("\n%s \t %c \t%.2f",nome1, sexo1, nota1);
    printf("\n%s \t %c \t%.2f",nome2, sexo2, nota2);

}
