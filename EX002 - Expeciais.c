// Importa��o das Bibliotecas
#include <stdio.h>
#include <locale.h>
/* *******************************************
 * Programa criado por Rafael G�es Duarte
 * para o curso de Linguagem C DO Estudonalta
 * ******************************************
*/
void main(){
    printf("Rafael \a");
    // Formata��o para Portugu�s do Brasil
    setlocale(LC_ALL,"Portuguese");
    // Mostrar o conte�do na Tela
    printf("Expeciais");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\\a \t = \tBeep");
    printf("\n\\n \t = \tNova Linha");
    printf("\n\\t \t = \tTubula��o");
    printf("\n\%% \t = \tPorcentagem");
    printf("\n\\? \t = \tInteroga��o");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=");
}
