#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    //printf("O [] tem [] anos ","Rafael", 18);
    printf("O %s tem %d anos de idade\n","Rafael", 18);
    printf("Seu peso atual � de %.2fKl\n", 60.5);
    printf("O seu sexo � %c ",'M');
}
