#import <stdio.h>
#import <locale.h>
void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1;
    printf("<<< ANTECESSOR e SUCESSOR >>>\n");
    printf("-----------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    int ant = n1 - 1;
    int suc = n1 + 1;
    printf("Analisando o numero %d. Seu Antecessor � %d e seu Sucessor � %d.\n", n1, ant, suc);
}
