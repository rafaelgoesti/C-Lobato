#include <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< PRE�O DO PRODUTO >>>\n");
    printf("------------------------\n");
    char produto[30];
    float preco;
    int desconto;

    printf("Produto: ");
    gets(produto);

    printf("Pre�o do %s R$: ", produto);
    scanf("%f", &preco);

    printf("Desconto (%%): ");
    scanf("%i",&desconto);

    float resultado = preco - (preco * 10 / 100);

    printf("O produto %s custava R$ %.2f, mas com %.2i%% de desconto, passa a custar R$ %.2f \n",produto, preco, desconto, resultado);
}
