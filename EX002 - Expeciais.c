// Importação das Bibliotecas
#include <stdio.h>
#include <locale.h>
/* *******************************************
 * Programa criado por Rafael Góes Duarte
 * para o curso de Linguagem C DO Estudonalta
 * ******************************************
*/
void main(){
    printf("Rafael \a");
    // Formatação para Português do Brasil
    setlocale(LC_ALL,"Portuguese");
    // Mostrar o conteúdo na Tela
    printf("Expeciais");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\\a \t = \tBeep");
    printf("\n\\n \t = \tNova Linha");
    printf("\n\\t \t = \tTubulação");
    printf("\n\%% \t = \tPorcentagem");
    printf("\n\\? \t = \tInterogação");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
}
