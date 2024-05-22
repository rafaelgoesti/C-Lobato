#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    unsigned int idade = 18;
    float peso = 55.89;
    char sexo = 'M';
    char nome[] = "Rafael";
    printf("Seu nome é %s \n", nome);
    printf("Sua idade é de %d anos\n", idade);
    printf("Seu peso é de %.2f \n", peso);
    printf("Seu sexo é %c", sexo);
    // %s --> Representa caracteres como por exemplo: Nome ou outra cadeia de caracteres
    // %d --> Mostra idade ou outro valor inteiro
    // %f --> Serve para mostra valores flutuantes com virgulas
    // %c --> Serve para mostar mensagem pequena como por xemplo o sexo de uma pessoa
}
