#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< DOBRO e TER�A-PARTE >>>\n");
    printf("---------------------------\n");
    int n1;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    int dobro = n1 * 2;
    int tparte = (n1 / 3);
    printf("Analisando o n�mero %i. Seu dobro � %i e sua tera parte � %i.\n",n1, dobro, tparte);
    printf("-----------------------------------------------------------");
}
