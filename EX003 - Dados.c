#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Qual � seu nome? ");
    gets(nome);

    printf("Quantos anos voc� tem? ");
    scanf("%d", &idade);

    printf("Qual � seu peso? \(KG)\ ");
    scanf("%f", &peso);

    printf("--------<<<PROCESSANDO>>>--------\n");
    printf("Muito prazer, %s. Voc� tem %d anos e pesa %.2f correto? \nFim.", nome, idade, peso);

}
