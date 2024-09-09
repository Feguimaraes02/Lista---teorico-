#include <stdio.h>

int main(){

    float r;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &r);

    float a = 3.14 * (r*r);

    printf("A area da sua circunferencia eh de: %.1f", a);

    return 0;

}
