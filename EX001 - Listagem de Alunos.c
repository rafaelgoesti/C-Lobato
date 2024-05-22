#include <stdio.h>]
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("------------------\n");
    printf("Listagem de Alunos\n");
    printf("Nome \t \tNota");
    printf("\nAna Beatriz \t8.5");
    printf("\nBianca Martins \t9.0");
    printf("\nCláudio Sá \t5.5");
    printf("\nGiovana Silva \t7.5");
    printf("\n-------------------");
}
