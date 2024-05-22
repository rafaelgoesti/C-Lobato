#import <stdio.h>
#import <locale.h>
void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    printf("<<< ANTECESSOR e SUCESSOR >>>\n");
    printf("-----------------------------\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    int ant = n1 - 1;
    int suc = n1 + 1;
    printf("Analisando o numero %d. Seu Antecessor é %d e seu Sucessor é %d.\n", n1, ant, suc);
}
