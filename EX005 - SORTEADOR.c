#import <stdio.h>
#import <stdlib.h>
#import <time.h>
void main(){
    srand(time(NULL));
    int n = rand() % 6;
    int r;
    printf("\nVou pensar em um numero entre 0 e 5. Tente adivinhar!\n");
    printf("Qual seu palpite? ");
    scanf("%d", &r);
    printf("O computador pensou no numero %d e voce pensou no numero %d.",n,r);
    printf("\n----------------------------------------------------------");
}
