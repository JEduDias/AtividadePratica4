#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // para aceitar acentos

    int tipo;
    float comp, larg, area, iluminancia, fluxoTotal, qtdLamp;

    
    printf("Selecione o tipo de c�modo:\n1 - Quarto\n2 - Escrit�rio\n3 - Cozinha\nDigite a op��o desejada: ");
    scanf_s("%d", &tipo);//solocita o tipo do comomo

    printf("Digite o comprimento do c�modo (m): ");
	scanf_s("%f", &comp);// solicita o comprimento do c�modo
    printf("Digite a largura do c�modo (m): ");
	scanf_s("%f", &larg);// solicita a largura do c�modo

    // calcula a �rea
    area = comp * larg;

    // define ilumin�ncia conforme tipo
    if (tipo == 1)
        iluminancia = 150;
    else
        iluminancia = 300;

    // calcula fluxo total necess�rio
    fluxoTotal = area * iluminancia / 0.8;

    // calcula qtd m�nima de l�mpadas
    qtdLamp = ceil(fluxoTotal / 800);

    // sa�da
    printf("\nTipo de c�modo: %d (Ilumin�ncia recomendada: %.0f lux)\n", tipo, iluminancia);
    printf("�rea do c�modo: %.2f m�\n", area);
    printf("Fluxo luminoso total necess�rio: %.2f l�mens\n", fluxoTotal);
    printf("Quantidade m�nima de l�mpadas recomendadas: %.0f\n", qtdLamp);

    return 0;
}
