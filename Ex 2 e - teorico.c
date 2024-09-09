#include <stdio.h>

int main(){

    float h, l;

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &h);
    printf("Digite a largura da parede em metros: ");
    scanf("%f", &l);

    float a = h*l;

    int consumo = 300;
    float nescessario = a*consumo;
    int lata = 2000;
    float totallatas = nescessario/lata;

    int latasnecessarias = (int)ceil(totallatas);

    printf("Voce vai precisar de %d latas de tinta.\n" ,latasnecessarias);

    return 0;


}
