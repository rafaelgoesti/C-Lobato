#include <stdio.h>
void main(){
    printf("<<< ALFABETO >>>\n");
    printf("----------------\n");
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    int ant = letra - 1;
    int dep = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n", letra, ant, dep);
}
// Antes de C temos A
// Depois de C emos D
