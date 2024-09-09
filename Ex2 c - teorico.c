#include <stdio.h>

int main(){

    char nome[20];
    int i;

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("%s digite a sua idade:\n", nome);
    scanf("%d", &i);

    int d = i*365;

    printf("%s, voce ja viveu %d dias em sua vida.", nome, d);

    return 0;
}
