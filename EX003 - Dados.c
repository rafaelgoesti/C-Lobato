#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Qual é seu nome? ");
    gets(nome);

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    printf("Qual é seu peso? \(KG)\ ");
    scanf("%f", &peso);

    printf("--------<<<PROCESSANDO>>>--------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.2f correto? \nFim.", nome, idade, peso);

}
